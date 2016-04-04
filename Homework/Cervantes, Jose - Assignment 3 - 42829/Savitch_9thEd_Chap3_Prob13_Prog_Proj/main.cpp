/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: Solve the riddler puzzle
 * Created on March 26, 2016, 5:02 PM
 */

//User Libraries

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    short one;

//Initialize Variables
    
   
    
//Input Values 
    for (one = 1; one <= 9; one++) {
       
        short two(5), three(6), four(7);
        
        if ((one + two + three + four) == 27) {
           
            cout << one << two << three << four << endl;
        }
        
        
               
    }
    for (one = 1; one <= 9; one++) {
       
        short  two(9), three(6), four(7);
        
        if ( one + two + three + four == 27 ) {
           
            cout << one << two << three << four << endl;
        }
        
        
               
    }
    
    for (one = 1; one <= 9; one++) {
       
        short  two(9), three(8), four(7);
        
        if ( one + two + three + four == 27 ) {
           
            cout << one << two << three << four << endl;
        }
        
        
               
    }
    for (one = 1; one <= 9; one++) {
       
        short  two(9), three(4), four(6);
        
        if ( one + two + three + four == 27 ) {
           
            cout << one << two << three << four << endl;
        }
        
        
               
    }
        
//Map The Inputs to the Outputs
    
    
//Output the Results

//Exit Stage Right!
    return 0;
}
