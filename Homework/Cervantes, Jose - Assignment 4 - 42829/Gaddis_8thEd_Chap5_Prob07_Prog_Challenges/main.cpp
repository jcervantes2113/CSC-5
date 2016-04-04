/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on April 4, 2016, 10:03 AM
 */

//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!


int main(int argc, char** argv) {
//Declared Variables
    float days, pen_cst, count, total;


//Initialize Variables
    pen_cst = 0.01;

//Input Values 
    cout << "This program calculates how much a person would make if his or her \n"
        "salary is one penny the first day and two pennies the second day, and \n"
        "continues to double each day. " << endl << endl;
    cout << "Please enter the amount of days you worked for: ";
    cin  >> days;
    
    for (count = 1; count <= days; count++){
        cout << endl;
        
        //This calculates the total amount of pennies attained in the number
        //of days worked if its doubled each day
        
        total =  pen_cst;
        pen_cst *=2;
        cout << "Days    Amount Earned per day" << endl; 
        cout<< count << "       " << total << endl;
        
        
    }
    
    
//Map The Inputs to the Outputs
    

//Output the Results
    

//Exit Stage Right!
    return 0;
}
