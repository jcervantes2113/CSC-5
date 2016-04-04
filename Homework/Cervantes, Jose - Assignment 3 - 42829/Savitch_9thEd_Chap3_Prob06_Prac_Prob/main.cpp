/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on March 28, 2016, 6:34 PM
 */

//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    float buoyacy, radius, radusize, wghtobjt, weight;
    
    
//Initialize Variables
   
//Input Values 
    cout << "Please enter the radius of the submerged object: ";
    cin  >> radius;
    cout << "Please enter the weight of the object: "; 
    cin  >> weight;
    
    
//Map The Inputs to the Outputs
    wghtobjt =  (62.4 * weight);
   
   radusize = ((4/3)* (3.14 * weight * weight * weight));
   
   buoyacy = (wghtobjt * radusize);
   
   if (buoyacy >= weight){
        cout << " The object will float.";
        
    } else {
        cout << " The object will sink.";
    }
   
//Output the Results

//Exit Stage Right!
    return 0;
}
