/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on April 3, 2016, 10:20 PM
 */

//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    float rate, memshp, year, total;

//Initialize Variables
    rate   = 0.04f; //The rate is 4 percent per year
    memshp = 2500;  // starting membership is 2500 per year
    year   = 1;     // starting year

//Input Values 
    
//Map The Inputs to the Outputs
    
//Output the Results
    cout << "This program calculates and displays a country club rate, which currently \n"
            "charges $2,500 per year for membership, has increased its membership \n"
            "fee by 4% each year for the next six years." << endl << endl;
    
    cout << "Year   Cost" << endl;;
    
    while (year <= 6){
        total  = memshp * rate; //equation for the rate
        memshp = memshp + total;//equation for the rate plus the initial amount
        cout << year << "      " <<memshp << endl;
        year++;
    }

//Exit Stage Right!
    return 0;
}
