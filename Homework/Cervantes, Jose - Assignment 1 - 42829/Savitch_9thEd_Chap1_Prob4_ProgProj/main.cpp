/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on March 12, 2016, 8:11 AM
 */

//system Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function  Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
// Declare Variables
    float seconds;    // seconds equals the amount of time of freefall
    float speed;     //speed equals 32 feet per second

//Initialize Variables
    speed = 32;   // 32 feet per second

//Input Values 
    
//Map The Inputs to the Outputs
    
//Output the Results
    cout<<"This program tells you how long an object will travel for, based on ";
    cout<<"the amount of seconds given\n";
    cout<<"\n";
    cout <<"(Press Enter/Return after value has been inputed)\n";
    cout <<"\n";      //this is the spacing
    cout << "How long did it take for the object to";
    cout << " hit the ground (In Seconds)"<<endl;    
    cin >> seconds;                     //input value for the amount of time it took
    
    cout << "The Object would  have traveled ";          
    cout << (seconds*speed)/2;          //equation used to calculate distance
    cout <<" feet before it would hit the ground"; 
//Exit Stage Right!
    return 0;
}