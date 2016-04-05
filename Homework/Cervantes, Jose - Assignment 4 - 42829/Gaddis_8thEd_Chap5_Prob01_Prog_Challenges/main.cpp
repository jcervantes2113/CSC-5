/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: calculate the sum of all integers mentioned
 * Created on April 3, 2016, 7:55 PM
 */

//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    float num, totl_sum = 0, count;

//Initialize Variables

//Input Values 
    cout << "This program calculates the sum of all the integers from 1 \n"
            "up to the number entered." << endl;
    cout << endl << "Please enter the number you would like to add from 1 \n"
            "up to the number entered: ";
    cin >> num;
    
//Map The Inputs to the Outputs
    
    for (count = 1; count <= num; count ++) {
       if (num >= 0){
        totl_sum = totl_sum + count;
        cout << totl_sum << endl;
        
       }else {
            cout << "Thats not a positive integer.";
        }
    }
    
//Output the Results

//Exit Stage Right!
    return 0;
}
