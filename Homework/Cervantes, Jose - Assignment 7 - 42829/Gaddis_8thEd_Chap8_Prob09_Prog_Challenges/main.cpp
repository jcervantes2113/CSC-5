/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose Bubble and Selection Sort Comparison
 * Created on June 1, 2016, 3:24 PM
 */

#include<iostream>
using namespace std;

int bbleSrt(int[], int);
void prntArr(int[], int);
int selSort(int [], int);

//User Libraries

//Global Constants
const int SIZE = 20;
//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    int bTotal(0), sTotal(0);
    int array[SIZE] = {1, 345, 56, 65, 4, 34, 111, 54, 46, 55,
                         23, 45, 48, 21, 6, 87, 98, 42 , 2, 7};

//Initialize Variables

//Input Values 
    
//Map The Inputs to the Outputs
    
//Output the Results
    //Bubble sort
        bTotal = bbleSrt(array, SIZE);
        prntArr(array, SIZE);
        cout<<"It took "<<bTotal<<" switches for the bubble sort to completly sort"
                " the array."<<endl;
    
    //Selection sort
        sTotal = selSort(array, SIZE);
        cout<<"It took "<<sTotal<<" switches for the selection sort to completly sort"
                " the array."<<endl;

//Exit Stage Right!
    return 0;
}

int bbleSrt(int n[], int size){
    int tempV(0), nAtmpts(0);
    for (int i=size-1; i>0; i--)
        
        for(int x=0; x<i; x++){
            nAtmpts++;
            if (n[i] < n[x]){
                
               tempV = n[i];
               n[i]  = n[x];
               n[x]  = tempV;
            }
        }
    return nAtmpts;
}

int selSort(int n[], int size){
    int tempV(0), nAtmpts(0);
    
    for(int i=0; i<size; i++)
        for(int x=i+1; x<size; x++){
            nAtmpts++;
            if(n[i] > n[x]){
                
                tempV = n[i];
                n[i]  = n[x];
                n[x]  = tempV;
            }
        }
    return nAtmpts;
}


void prntArr(int n[], int size){
    for(int i=0; i<size; i++){
        cout<<n[i]<<endl;
    }
}