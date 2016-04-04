/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: Calculate the amount of miles traveled over a given amount of time
 * Created on April 3, 2016, 11:01 PM
 */

//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    float distnce, speed, time, intrval;

//Initialize Variables
    intrval = 1;
    

//Input Values 
    cout << "This program calculates the distance traveled over a given amount \n"
            "of time." << endl << endl;
    cout << "Please enter the miles traveled over a period of an hour: ";
    cin  >> speed;
    cout << "Please enter the amount of hours that you traveled: ";
    cin  >> time;
    
//Map The Inputs to the Outputs
    cout << "Hours    Distance Travled" << endl;
    while (intrval <= time){
        
        //This calculates the distance traveled at each hour and also displays 
        //it.
        distnce = speed * intrval;
        cout << intrval <<"        " <<distnce << endl;
        intrval++;
    }
    
//Output the Results
   
//Exit Stage Right!
    return 0;
}
