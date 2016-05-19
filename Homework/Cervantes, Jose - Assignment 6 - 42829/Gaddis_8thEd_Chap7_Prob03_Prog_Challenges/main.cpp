/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on May 16, 2016, 1:34 PM
 */

#include<iostream>
using namespace std;

//User Libraries

//Global Constants


//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    const int  SIZE = 5;
    
    string sauce[SIZE] = {"Mild", "Medium", "Sweet","Hot", "Zesty"};
    int nJars[SIZE] = {} , highest, lowest, lSauce(0), hSauce(0);
    
    

//Initialize Variables

//Input Values 
    cout << "Please enter the number of jars sold for the following sauces. " << endl;
    
    for (int i = 0; i < SIZE; i++){
        
        do{
            cout << sauce[i] << ": ";
            cin  >> nJars[i];
            
            if(nJars[i] < 0) {cout << "Try again. No negative numbers." << endl;}
            
        }while(nJars[i] < 0);
    }
    
    //Declared variables
    highest = nJars[0];
    lowest  = nJars[0];
    
    for (int i = 1; i < SIZE; i++){
        if (highest < nJars[i]) {
            highest =  nJars[i]; 
            hSauce = (i);
        }
        
        if (lowest > nJars[i]) {
        lowest =  nJars[i];
        lSauce = (i);
        }
        
    }

    cout << endl;
    cout << "The lowest Selling jars is: " << sauce[lSauce] << endl;
    cout << "The highest Selling jars is: " << sauce[hSauce] << endl;
    cout << "Total sales: " << nJars[1]+nJars[2]+nJars[3]+nJars[4];
    
    
    
//Map The Inputs to the Outputs
    
//Output the Results

//Exit Stage Right!
    return 0;
}
