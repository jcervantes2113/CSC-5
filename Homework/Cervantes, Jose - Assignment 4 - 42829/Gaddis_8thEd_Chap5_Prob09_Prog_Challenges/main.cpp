/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on April 4, 2016, 10:24 AM
 */

//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    float floors, rooms, rms_ocup, count, ttl_rms, ttl_ocu;

//Initialize Variables
    ttl_rms = 0;
    ttl_ocu = 0;
    

//Input Values 
    cout << "This program calculates how many rooms a hotel has, how many of \n"
            "them are occupied, how many are unoccupied, and the percentage of \n"
            "rooms that are occupied. " << endl << endl;
   
    cout << "Please enter the number of floors the hotel has (Then Press Enter): ";
    cin  >> floors; 
    
    
//Map The Inputs to the Outputs
    for(count = 1; count <= floors ; count++){
        if (count == 13){
            
            
        }else {
        cout << "Please enter the amount of rooms on the " << count << " floor: ";
        cin  >> rooms;
        cout << "Please enter how many rooms of the " << count << " floor are "
                "occupied: ";
        cin  >> rms_ocup;
        cout << endl;
        
        //These two lines add up the amount of rooms and the amount that are 
        //occupied
        ttl_rms = ttl_rms + rooms;     //total rooms
        ttl_ocu = ttl_ocu + rms_ocup;  //total rooms occupied
        }
    
    }
    
//Output the Results
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "There are a total of "<< ttl_rms << " rooms with " << ttl_ocu << ""
            " of them being occupied, with a \n"
            " " << (ttl_ocu/ttl_rms)  << "% " << "of them being occupied.";

//Exit Stage Right!
    return 0;
}
