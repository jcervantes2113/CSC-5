/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on May 31, 2016, 4:12 PM
 */

#include<iostream>
#include <string>
using namespace std;

void sortArr(string *, int);
void prntArr(string *, int);

//User Libraries

//Global Constants
const int SIZE = 20;

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables


string names[SIZE] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                           "Griffin, Jim", "Stamey, Marty", "Rose, Geri", 
                           "Taylor, Terri", "Johnson, Jill","Allison, Jeff", 
                           "Looney, Joe", "Wolfe, Bill", "James, Jean", 
                           "Weaver, Jim", "Pore, Bob", "Rutherford, Greg", 
                           "Javens, Renee", "Harrison, Rose", "Setzer, Cathy",
                           "Pike, Gordon", "Holland, Beth" };
//Initialize Variables

//Input Values 
    
//Map The Inputs to the Outputs
    
//Output the Results
    //Sort the array
        sortArr(names,SIZE);
    //Print the array
        prntArr(names,SIZE);

//Exit Stage Right!
    return 0;
}


void sortArr(string array[], int NUM_NAMES)
{
int startScan, minIndex;
string minValue;

for(startScan = 0; startScan < (NUM_NAMES -1); startScan++)
{
    minIndex = startScan;
    minValue = array[startScan];
    for(int index = startScan +1; index < NUM_NAMES; index++)
    {
        if (array[index] < minValue)
        {
            minValue = array[index];
            minIndex = index;
        }
    }
    array[minIndex] = array[startScan];
    array[startScan] = minValue;
}
}

void prntArr(string *n, int size){
    for(int i=0; i<size; i++){
        cout<<*(n+i)<<endl;
    }
}