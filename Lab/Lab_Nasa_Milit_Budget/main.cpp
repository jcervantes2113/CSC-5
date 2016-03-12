/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: Calculate Nasa + Military Budget
 * Created on March 2, 2016, 10:00 AM
 */

//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function  Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
// Declare Variables 
    float usbdgt;     // United States Budget
    float nasabdgt;   // Nasa's Budget
    float milbdgt;    // Military Budget
    float total;      // total percent of US budget
//Initialize Variables
    usbdgt = 3.8e12f; // https://www.nationalpriorities.org/budget-basics/federal-budget-101/spending/
    nasabdgt = 18.5e9f; // http://www.nasa.gov/content/reach-for-new-heights-nasa-budget-unveiled-for-fiscal-year-2016
    milbdgt =  598.5e9f;  //https://www.nationalpriorities.org/campaigns/military-spending-united-states/
    
//Input Values 
    
//Map The Inputs to the Outputs
    
//Output the Results
    
    cout<< "NASA's Budget" <<endl;    //Calculation for NASA budget
    total = nasabdgt/usbdgt;          // Equation
    cout<<total<<" %"<< endl;
    
    cout<<"The Military's Budget" <<endl; // Calculation for Military's Budget
    total = milbdgt/usbdgt;               // Equation
    cout<<total<<" %"<<endl;
    
    

//Exit Stage Right!
    return 0;
}
