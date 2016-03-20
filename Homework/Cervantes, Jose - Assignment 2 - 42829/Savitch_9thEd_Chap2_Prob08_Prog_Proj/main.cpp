/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: calculate how many months it would take to pay off a debt
 * Created on March 19, 2016, 7:12 PM
 */

//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    float totlcost, monrate, monpymnt, months, intrst;

//Initialize Variables
    
    totlcost = 1000;   // Total cost of the loan
    monrate  = 0.015f; // monthly rate at which the bank is charging you
    monpymnt = 50;     // monthly payment at which you want to pay each month
    months   = 1;      // the month you start out with 1
    ;
//Input Values 
    cout << "This program will tell you how long it will take to pay of your"
            " $1000 dollar loan with 50 dollar payment monthly at 1.5% "<< endl;
    cout <<  "interest per month." << endl;
    cout <<endl;
    
    
    
    
    while (months < 25){
        
        // This equation calculates the interest generated at each payment
        intrst = (totlcost * monrate);
        
        // This calculates the monthly payment each month which also inlcudes the
        // interest subtracted from the original 50 dollars
        monpymnt = (50-(totlcost * monrate));
        
        // This calculates the total amount due subtracted from the monthly payment
        totlcost = totlcost-(50-(totlcost * monrate));
        
        //This code sets the decimal point 2 places to the right
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        
        cout <<"In the "<< months <<" month your monthly payment is $"<< monpymnt<<
              " and your new balance is $"<< totlcost<< " and you paid "
               "a total of $" << intrst << " interest" << endl;
        months++;
        
        
        
        
        
        
    }
    
//Map The Inputs to the Outputs
    
//Output the Results

//Exit Stage Right!
    return 0;
}
