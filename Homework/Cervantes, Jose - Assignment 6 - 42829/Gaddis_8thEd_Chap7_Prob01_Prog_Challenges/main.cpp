/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: Selects the largest and smallest value from a list.
 * Created on May 16, 2016, 10:09 AM
 */


#include<iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    const int SIZE = 10;
    int num[SIZE] = {};
    
//Initialize Variables

//Input Values 
    cout << "This program lets the user enter 10 digits positive or negative \n"
            "and displays the highest and the lowest of the list." << endl << endl;
    
    cout << "Please enter 10 digits: " << endl;
    
    for (int i = 0; i < 10; i++){
        cout << "Enter digit " << i + 1<< ": ";
        cin >> num[i];
    }
    // Declared variables
    int hig_num(0); 
    hig_num = num[0]; // sets the first array value to test each one
    
    for (int i = 1; i < 10; i++){    
        if (hig_num < num[i]){ // Checks for the highest number
            hig_num = num[i];
            
        } 
    }
    
    // Declared Variables
    int low_num(0);   // sets the first array value to test each one
    low_num = num[0];
    
    for (int i = 1; i < 10; i++){    
    if (low_num > num[i]){ // Checks for the lowest number
        low_num = num[i];

        } 
    }
    cout << endl;
    cout << "The largest number is: "  << hig_num << endl;
    cout << "The Smallest number is: " << low_num << endl;
//Map The Inputs to the Outputs
    
//Output the Results

//Exit Stage Right!
    return 0;
}

