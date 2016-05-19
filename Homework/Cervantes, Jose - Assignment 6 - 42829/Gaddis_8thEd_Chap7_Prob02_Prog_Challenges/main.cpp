/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on May 16, 2016, 10:38 AM
 */


#include<iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    
    const int SIZE = 12;
    const int RAIN = 12;
    float sumRain = 0;
    float nRain[RAIN] = {};
    string nMonth[SIZE] = {"January","February", "March", "April", "May", 
                           "June", "July", "August","September", "October",
                           "November", "December"};
//Initialize Variables
    
//Input Values 
    cout << "Please enter the rain fall (In Inches) for the following months:" << endl;
    
    for(int i = 0; i < SIZE; i++){
        
        do { 
            cout << nMonth[i] << ": ";
            cin  >> nRain[i];
            
            if (nRain[i] < 0){
                cout << "Try again. You cant enter negative rain fall." << endl;
            }
        
        }while (!(nRain[i] > 0));
        sumRain = sumRain + nRain[i];
    }
    
// Declared Variables
    float highest = nRain[0], 
          lowest  = nRain[0];
    
    for(int i = 1; i < SIZE; i++){
        // Gets value for lowest rain fall
        if (lowest > nRain[i]) { lowest = nRain[i]; }
        
        // Gets value for highest rain fall
        if (highest < nRain[i]) { highest = nRain[i]; }
        
    }
    cout << "The highest rainfall is " << highest << " Inches" << endl;
    cout << "The lowest rainfall is "  << lowest  << " Inches" << endl;
    cout << "Total Rain Fall: " << sumRain;
    
//Map The Inputs to the Outputs
    
//Output the Results

//Exit Stage Right!
    return 0;
}

