/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on April 3, 2016, 9:32 PM
 */

//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    float calories, min, per_min, totl_cal;
//Initialize Variables
    calories = 3.6; //Calories burned per minute
    per_min = 5;    //every five minute its incremented by five

//Input Values 
    
//Map The Inputs to the Outputs
    
//Output the Results
    cout << "This program tells you how many calories you burned in 30 \n"
            "minutes at 5 minutes intervals. Each minute you burn 3.6 calories." << endl;
    
    cout << endl << "Minutes  Calories burned" << endl;
    for (min = 5; min <= 30; min+=5 ){
        
        //This calculates minutes per calorie burned at intervals of 5
        totl_cal   = per_min * calories;
        //This increments the equation by 5
        per_min += 5 ; 
        
        //This displays the results
        cout << min << "        " << totl_cal << endl;
        
        
       
         
    }

//Exit Stage Right!
    return 0;
}
