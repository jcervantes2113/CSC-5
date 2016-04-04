/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *P
 * Created on April 3, 2016, 8:46 PM
 */

//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    float ocean_lvl(1.5), total(0), year;

//Initialize Variables
 

//Input Values 
    
//Map The Inputs to the Outputs
    
//Output the Results
    cout << "This program displays a table showing the number of millimeters that\n"
            "the ocean will have risen each year for the next 25 years" << endl;
    cout << endl << "Year  Growth in millimeters" << endl;
    
    for(year = 0; year <=25; year++){
       
        cout <<   year   << "     " << total << endl;
        total = total + ocean_lvl;
    }
        

//Exit Stage Right!
    return 0;
}
