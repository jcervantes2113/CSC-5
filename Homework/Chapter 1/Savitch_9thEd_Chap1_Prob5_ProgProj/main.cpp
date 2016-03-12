/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on March 12, 2016, 8:14 AM
 */

//User Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begin Here!

int main(int argc, char** argv) {
      //Declare Variables
    
    
    //Initialize Variables
    char letter; // This variable holds the letter thats inputed
    //input values
    
    //Map the inputs to the outputs
    
    //Output the results
    cout<<"This program turns any letter you input to a drawing of a big C\n";
    cout<<"\n";
    cout <<"(Press Enter/Return after value has been inputed)\n";
    cout <<"\n";
    cout<< "What letter do you want to display in a C formation?"<<endl;
    cin >> letter; 
    
    // Location of "letter" 1st row
    cout<<"      "<< letter <<" ";
    cout<<letter <<" "<< letter <<endl; // "" = The Spacing
    
    
    // Location of "letter" 2nd row
    cout<<"     "<<letter<<"    "<< letter<<endl;    // "" = The Spacing
    
    
    
    // Location of "letter" 3rd row
    cout<<"    "<< letter <<endl;   // "" = The Spacing
    
    // Location of "letter" 4th row
    cout<<"    "<< letter<<endl; // "" = The Spacing
    
    // Location of "letter" 5th row
    cout<<"    "<< letter<<endl; // "" = The Spacing
    
    // Location of "x" 6th row
    cout<<"    "<<letter<<endl;      // "" = The Spacing
    
    // Location of "letter" 7th row
    cout<<"    "<< letter<<endl;   // "" = The Spacing
    
    
    // Location of "letter" 8th row
    cout<<"     "<<letter<<"    "<< letter<<endl;    // "" = The Spacing

    // Location of "letter" 9th row
    cout<<"      "<<letter<<" "<<letter;// "" = The Spacing
    cout<<" "<< letter<<endl;
    return 0;
}