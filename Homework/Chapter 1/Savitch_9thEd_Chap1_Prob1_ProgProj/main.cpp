/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on March 12, 2016, 8:05 AM
 */
   //System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begin Here!

int main(int argc, char** argv) {
    //Declare Variables 
    float x; // x = first number entered
    float y; // y = second number entered
    float z; // z = out put of the two numbers
    
 
    //Initialize Variables
    
    //input values
    
    //Map the inputs to the outputs
   
    
    //Output the results
    cout <<"(Press Enter/Return after value has been inputed)\n";
    cout <<"\n";      //This is the spacing
    
    cout << "what two numbers do you want to add and multiply.\n";
    cin >> x;        //this is the input of the first value
    cout << "and\n"; //this is the spacing
    cin >> y;        //this is the input of the second value
    
    cout << "\n";    //this is the spacing
    cout << "Multiplication\n"; 
    z = x * y;                          // The Process for multiplication
    cout << x<<"*"<<y <<"="<< z << "\n";//This Displays the Multiplication process  
    
    cout<<"\n";
    
    
    cout<< "Addition\n"; 
    z = x + y;                          // The Process for addition
   cout << x<<"+"<<y <<"="<< z << "\n"; //This Displays the Addition process
    
    return 0;
}