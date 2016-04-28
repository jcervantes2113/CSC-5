/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on April 26, 2016, 12:00 PM
 */


#include<iostream>
#include<cmath>
using namespace std;

float kineticEnergy (float mass, float velocity);

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    float speed, weight;
    // speed  = speed of the object is traveling
    // weight = weight of the object in kilograms
//Initialize Variables

//Input Values 
    
//Map The Inputs to the Outputs
    
//Output the Results
   //menu
   cout << "this program calculates the kinetic energy of of an object." << endl;

   //function call
   cout << kineticEnergy (weight, speed); // displays the answer

//Exit Stage Right!
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** kineticEnergy  ***********************************
 *Inputs
 *      None
 *Outputs
 * 
 * kin_engy --> outputs the kinetic energy of an object
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

float kineticEnergy (float mass, float velocity) {
    float kin_engy;
    cout << "Please enter the mass of the object in kilograms: ";
    cin  >> mass;
    
    cout << endl;
    
    cout << "Please enter the velocity of the object in meters per seconds: \n";
    cout << "How many meters did the object travel in one second: ";
    cin  >> velocity; 
    
    kin_engy = (mass * pow(velocity, 2))/2; // formula used
    
    return (kin_engy); // this returns the total amount of energy.
}