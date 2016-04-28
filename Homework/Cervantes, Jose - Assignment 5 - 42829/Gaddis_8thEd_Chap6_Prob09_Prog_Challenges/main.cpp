/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on April 26, 2016, 8:22 PM
 */


#include<iostream>
#include<cmath>
using namespace std;

float presentValue ();

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables

//Initialize Variables

//Input Values 
    
//Map The Inputs to the Outputs
    
//Output the Results
    cout << "This Program calculates the amount of money you need to invest to "
            "attain $10,000 dollars in ten years" << endl;
    
    presentValue(); // function call
    
    

//Exit Stage Right!
    return 0;
}



//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************** presentValue ************************************
 *Inputs
 * r--> interest rate
 * n--> number of years
 * F--> Future value desired
 *Outputs
 * P--> Amount needed to acheive F the future value desired
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890


float presentValue (){
    float P, r, n, F;
    // P = current value, in his or her bank account 
    // r  = interest per year, percentage
    // n = number of years, 10 is the defaulft value
    // F  = future value
    
    //Inputs
    cout << "Please enter the annual interest rate(In percent): ";
    cin  >> r;
    
    cout << "Please enter the number of years you plan on compounding: ";
    cin  >> n;
    
    cout << "Please enter the amount you would like to achieve(In Dollars): ";
    cin  >> F;
    
    //Equation
    P = F/((pow(1 + (r * 0.01), n ))); // This calculates the amount needed
                                       // to achieve the desire amount
    //Output
    cout << "You would need a balance of $"<< P << " To acheive your"
                " goal of $" << F << endl; 
        
        
        
    
    
}

