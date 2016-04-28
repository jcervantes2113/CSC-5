/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: Calculate a future value of compound interest
 * Created on April 26, 2016, 9:56 PM
 */


#include<iostream>
#include<cmath>
using namespace std;

float futureValue(float pValue, float mInterest, float nMonths);

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    float pValue, mInterst, nMonths;

//Initialize Variables

//Input Values 
    
//Map The Inputs to the Outputs
    
//Output the Results
    cout << "This program calculates the amount of money you will have "
            "after a specific number of months. " << endl << endl;
    
    cout << "Please enter the present value of your account in dollars: $";
    cin  >> pValue;
    
    cout << "Please enter the monthly interest in percent: %";
    cin  >> mInterst;
    
    cout << "Please enter the number of months you are letting your money compund: ";
    cin  >> nMonths;
    
    cout << "Your balance is: $" <<futureValue(pValue, mInterst, nMonths);

//Exit Stage Right!
    return 0;
}



//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** futureValue  ***********************************
 *Inputs
 *      None
 *Outputs
 * 
 * fValue --> The amount of money the user will have
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

float futureValue(float pValue, float mInterst, float nMonths){
    float fValue;
    
    fValue = pValue * pow(1+(mInterst * 0.01), nMonths);
    
    return (fValue);
}