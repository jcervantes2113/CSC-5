/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on March 12, 2016, 8:09 AM
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
    float quartrs;   // quarters
    float dimes;     // dimes
    float nickles;   // nickels 
    float total;     // total = the total amount of nickels, dimes, and quarters
    
//Initialize Variables
    
    
    
//Input Values 
    
//Map The Inputs to the Outputs
    
//Output the Results
    cout<<"This program adds the amount of quarters, dimes,and nickels you have.\n";
    cout<<"\n";
    cout <<"(Press Enter/Return after value has been inputed)\n";
    cout <<"\n";                     // This is the spacing
    cout << "Enter the amount of quarters have.\n"; 
    cin >> quartrs;                  // input for the amount of quarters
    
    cout << "Enter the amount of dimes you have.\n";
    cin >> dimes;                   // input for the amount of dimes
    
    cout << "Enter the amount of nickels you have.\n";
    cin >> nickles;                 // input for the amount of nickels
    
    //This Equation calculates the amount of quarter, dimes,and nickels
    total = (quartrs * .25) + (dimes * .10) + (nickles * .05);
    
    cout <<"You have $"<< total <<endl; //Displays the answer


//Exit Stage Right!
    return 0;
}