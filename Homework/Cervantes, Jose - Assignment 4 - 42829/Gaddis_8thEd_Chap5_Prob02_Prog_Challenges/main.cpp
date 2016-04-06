/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: displays the characters for the ASCII codes 0 through 127
 * Created on April 3, 2016, 8:16 PM
 */

//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    char letter;
    int  num;
    

//Initialize Variables
    letter = 0;

//Input Values 
    
//Map The Inputs to the Outputs
    
    
//Output the Results
    cout << "This program displays the characters for the ASCII codes 0 through 127. each \n"
            "line contains 16 characters on each line." << endl;
    
    for (num = 0; num <= 127; num++){
        if (num % 16 == 0){
            cout << endl;
        }
       cout << letter;
       letter++;
       
    }
//Exit Stage Right!
    return 0;
}
