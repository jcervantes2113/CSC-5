/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on March 18, 2016, 2:15 PM
 */


//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declared Variables
    float alumnum, copper, glass, steel, length, dsplmnt, tempchan, value;

//Initialize Variables
    alumnum = 2.31e-5f; //Aluminum Linear Expansion
    copper  = 1.70e-5f; //Copper Linear Expansion
    glass   = 8.50e-6f; //Glass Linear Expansion
    steel   = 1.20e-5f; //Steel Linear Expansion
    
// This Block of code gives instructions to the user to determine which 
// equation will be used
    cout << "This Program calculates and outputs the linear displacement of "
            "Aluminum, Copper, Glass, Steel." <<endl;
    cout << "" << endl;
    cout << "Press the value 1 to calculate the linear "
            "displacement of aluminum." << endl;
    cout << "Press the value 2 to calculate the linear "
            "displacement of Copper." << endl;
    cout << "Press the value 3 enter to calculate the linear "
            "displacement of Glass." << endl;
    cout << "Press the value 4 to calculate the linear "
            "displacement of Steel." << endl;
    cout << "" <<endl; //Spacing
   
    
    
//Input Values
    
// This Determines Which equation will be selected based on
// the value thats inputed 
cout << "(After entering a number press enter):";
cin >> value; 
cout << "" <<endl; //Spacing
    
//Map The Inputs to the Outputs
    
    // This Block of code gives the user instructions to input the Temperature,
    // Length of Aluminum, and calculates its thermal expansion
    if (value==1){
        cout << "You've chosen to calculate the expansion Aluminum" <<endl;
        cout << "Enter the length of the Aluminum piece (In Meters):";
        cin >> length; // value thats being inputed for temperature change
        cout << "Enter the temperature change of Aluminum in Celsius"
                "(Initial Temperature - Final Temperature):";
        cin >> tempchan;
        dsplmnt = (alumnum * length * tempchan);
        cout << "" <<endl; //Spacing
        cout << "The thermal expansion of Aluminum is: " << dsplmnt << "(Meters)";
        
    // This Block of code gives the user instructions to input the Temperature,
    // Length of Copper, and calculates its thermal expansion
    }else if (value==2){
        cout << "You've chosen to calculate the expansion Copper" <<endl;
        cout << "Enter the length of the Copper (In Meters):";
        cin >> length; // value thats being inputed for temperature change
        cout << "Enter the temperature change of Copper (In Celsius)"
                "(Initial Temperature - Final Temperature):";
        cin >> tempchan; // value thats being inputed for temperature change
        dsplmnt = (copper * length * tempchan);
        cout << "" <<endl; //Spacing
        cout << "The thermal expansion of Copper is: " << dsplmnt << "(Meters)";
        
    // This Block of code gives the user instructions to input the Temperature,
    // Length of Glass, and calculates its thermal expansion
    }else if (value==3){
        cout << "You've chosen to calculate the expansion Glass" <<endl;
        cout << "Enter the length of the Glass (In Meters):";
        cin >> length; // value thats being inputed for temperature change
        cout << "Enter the temperature change of Glass in Celsius"
                "(Initial Temperature - Final Temperature):";
        cin >> tempchan;
        dsplmnt = (glass * length * tempchan);
        cout << "" <<endl; //Spacing
        cout << "The thermal expansion of Glass is: " << dsplmnt << "(Meters)";
        
    // This Block of code gives the user instructions to input the Temperature,
    // Length of Steel, and calculates its thermal expansion
    }else if (value==4){
        cout << "You've chosen to calculate the expansion Steel" <<endl;
        cout << "Enter the length of the Steel (In Meters):";
        cin >> length; // value thats being inputed for temperature change
        cout << "Enter the temperature change of Steel in Celsius"
                "(Initial Temperature - Final Temperature):";
        cin >> tempchan;
        dsplmnt = (steel * length * tempchan);
        cout << "" <<endl; //Spacing
        cout << "The thermal expansion of Aluminum is: " << dsplmnt << "(Meters)";
        
    // This tells the user that the value they inputed was not any of the four 
    // values that was shown.
    }else {
        cout << "You did not input 1, 2, 3, or 4.";
    }
//Output the Results

//Exit Stage Right!
     return 0;
}

