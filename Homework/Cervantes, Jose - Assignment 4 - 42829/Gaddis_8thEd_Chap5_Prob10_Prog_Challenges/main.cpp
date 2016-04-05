/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: count the amount of rain fall per month
 * Created on April 4, 2016, 7:16 PM
 */

//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    float years, count, num_month, rain_fll, cnt_two, ttl_mon, ttl_rain;
    // years    = number of years the user wants to repeat the code
    // count    = counts the number of time the code is ran
    // rain_fll = rain fall takes in the amount of rain received per month
    // cnt_two  = conts th number of times the code is ran for the second loop
//Initialize Variables
    num_month = 12;
    ttl_mon   = 0;
    ttl_rain  = 0;

//Input Values 
    cout << "Please enter the number of years you would like to calculate the\n"
            "amount of rain fall per month: ";
    cin  >> years;
    
//Map The Inputs to the Outputs
    for (count = 1; count <=years; count++){
        
        cout << "The " << count << " year" << endl; //displays what year its on
        
          for (cnt_two = 1; cnt_two <=num_month; cnt_two++){
           
            cout << "Please enter the rain fall (In Inches) for the " << cnt_two << " month: ";
            cin  >> rain_fll;
            
            ttl_mon  = ttl_mon  + 1;         //counts the number of months
            ttl_rain = ttl_rain + rain_fll;  // counts the total amount of rain fall
          }
    }
    
//Output the Results
    //displays the results
cout << "In " <<     ttl_mon      << " months the average of rainfall per "
         "month is " << ttl_rain/ttl_mon << " inches.";
//Exit Stage Right!
    return 0;
}
