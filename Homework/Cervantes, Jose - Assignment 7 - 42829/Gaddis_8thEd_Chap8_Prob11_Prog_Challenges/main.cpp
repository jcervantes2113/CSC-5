/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on June 1, 2016, 4:44 PM
 */

#include<iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants
const int SIZE = 20;

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    ifstream in;
    string names[SIZE] = {};

//Initialize Variables
    in.open("Names.txt");
    for (int i=0; i<SIZE; i++){
        in>>names[i];
    }
    
    for (int x=0; x<SIZE; x++){
        cout<<names[x]<<endl;
    }
//Input Values 
    
//Map The Inputs to the Outputs
    
//Output the Results

//Exit Stage Right!
    return 0;
}
