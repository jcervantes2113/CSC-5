/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: To Calculate an object falling time
 * Created on April 26, 2016, 10:53 AM
 */

//User Libraries
#include<iostream>
#include<cmath>
#include <iomanip> 
using namespace std;

float fall_dstnce (float distance, float g);

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    float value1(0), value2(0);
    

//Initialize Variables

//Input Values 
    
//Map The Inputs to the Outputs
    
//Output the Results
    cout << "This program Calculates an object falling time" << endl;
    cout << "Seconds  Meters" << endl;

//This for loop runs 1 through ten and calls the function within the for loop
for (int count = 1; count <=10; count++){   
   cout << count <<"        "<< fall_dstnce (value1, value2) << endl;
   
}
//Exit Stage Right!
    return 0;
}


//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** fallingDistance **********************************
 *Inputs
 *      None
 *Outputs
 * 
 * distance --> outputs the free fall distance in a given amount of time
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

float fall_dstnce (float distance, float g){
    
    g = 9.8;
    static int time = 1; //This keeps the original value of time so it outputs 
                         // a different value every time the loop is ran
    
    distance = (g * pow(time,2))/2; // This equation calculates the free fall time
    time ++;                        // over time++
    return (distance);
    
}