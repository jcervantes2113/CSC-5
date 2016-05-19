/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on May 17, 2016, 10:52 AM
 */

#include<iostream>
using namespace std;

void lrger_thn_N (float [], const int, int);

//User Libraries

//Global Constants
const int SIZE = 10;

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    float array [] = {1, 34, 36, 233 , 5667, -34, -34, -334, 4, .45};
    int n(0);
    
//Initialize Variables

//Input Values 
    cout << "This program gets the number that the user enters and finds the numbers /n"
            "That are greater than or equal to that number." << endl << endl;
    cout << "Please enter any number" << endl;
    cin  >> n;
    
    lrger_thn_N (array , SIZE, n);
//Map The Inputs to the Outputs
    
//Output the Results

//Exit Stage Right!
    return 0;
}



void lrger_thn_N (float array[], const int SIZE, int n){
    cout << "From This list of numbers. " << endl;
   
    //Displays the array
    for (int i = 1; i < SIZE; i++) {cout << array[i - 1] << endl; } // end
    
    cout << "These are the numbers that are greater then or equal to " << n << endl;
    
    // Finds the numbers that are great than or equal to n
    for (int i = 1; i < SIZE; i++){
        
        if (n <= array[i - 1] ){
            cout << array [i - 1] << endl;
        }
    }
}