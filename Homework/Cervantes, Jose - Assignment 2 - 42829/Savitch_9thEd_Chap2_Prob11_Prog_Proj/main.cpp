/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: calculates the temperature and the
            corresponding velocity in 1 degree increments in how fast
            sound travels.
 * Created on March 18, 2016, 10:15 PM
 */

//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    float stattemp, velcty, endtemp;
    //stattemp = starting temperature of the of the air in degrees
    //endtemp  = ending temperature at which the interval ends
    //velocity = velocity of sound

//Initialize Variables
    
//Input Values 
    cout << "This program calculates the temperature and the "
            "corresponding velocity in 1 degree increments in how fast "
            "sound travels." << endl;
    cout << "" << endl;
    cout << "Enter the starting temperature in Celsius and then press enter: ";
    cin  >> stattemp;
    cout << "" << endl;
    cout << "Enter the ending temperature in Celsius and then press enter: ";
    cin  >> endtemp;
    
//Map The Inputs to the Outputs
    
    // this if function is used if the starting temperature is greater 
    //than the ending temperature
    if      (stattemp >= endtemp){
        
    //This while loop repeats the starting with one degree lesser than the 
    //previous and stops until its even with the endtemp
    while   (stattemp >= endtemp ){
        //equation used to calculate the velocity and displays the answer
        velcty = (331.3 + (0.61 * stattemp));
        cout << "At " << stattemp << " degrees Celsius the velovity of sound is "
                "" << velcty << "m/s.";
        
        cout << "" <<endl;
        //this line increases the starting temperature by 1 degree
        stattemp = stattemp - 1; 
        
    }
    //This if statement is used if the starting temperature is lesser than 
    //the ending temperature
    }else if(stattemp <= endtemp ){
    
    //This while loop repeats the starting with one degree more than the 
    //previous and stops until its even with the endtemp
    while   (stattemp <= endtemp ){
        //equation used to calculate the velocity and displays the answer
        velcty = (331.3 + (0.61 * stattemp));
        cout << "At " << stattemp << " degrees Celsius the velovity of sound is "
                "" << velcty << "m/s.";
        cout << "" <<endl;
        //this line increases the starting temperature by 1 degree
        stattemp = stattemp + 1; 
        
    }
    }
//Output the Results

//Exit Stage Right!
    return 0;
}
 