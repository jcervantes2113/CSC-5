/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on June 1, 2016, 10:13 AM
 */

#include<iostream>

using namespace std;

void sortArr(int [], int);
void prntArr(int [], int);
int linSrch(int [], int, int, int);
int binSrch(int [], int, int, int);


//User Libraries

//Global Constants
const int SIZE = 20;

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    int answer(0), linTimes(0), binTimes(0), total;
    int score[SIZE] = {1, 345, 56, 65, 4, 34, 111, 54, 46, 55,
                       23, 45, 48, 21, 6, 87, 98, 42 , 2, 7};
     
//Initialize Variables

//Input Values 
    
//Map The Inputs to the Outputs

//Output the Results
    //Menu
        cout<<"This program compares the result of the number of attempts it takes\n"
                "for the binary and linear searches to find the values given"<<endl;
    // Selection sort
        sortArr(score, SIZE);

    //Print the array
        prntArr(score, SIZE);
        cout<<"Please enter an integer from the list you would like the binary and \n"
                "linear searches to find: ";
        cin>>answer;
        cout<<endl;

    //Displays the results of the linear search
        // Returns the number of attempts to total
        total = linSrch(score, SIZE, answer, linTimes); 
        if (total == -1){
            cout<<"The value was not found for the linear search."<<endl;
        }else {
            cout<<"It took the linear search a total of "<<total<<" Attempts to find the "
                  "value "<<answer<<"."<<endl;
        }
    
    //Displays the results of the binary search
    // Returns the number of attempts to total
        total = binSrch(score, SIZE, answer, binTimes);
        if (total == -1){
            cout<<"The value was not found for the binary Search."<<endl;
        }else {
            cout<<"It took the binary search a total of "<<total<<" Attempts to find the "
                   "value "<<answer<<"."<<endl;
        }


//Exit Stage Right!
    return 0;
}

void sortArr(int n[], int size){
    int tempV;
    //Sorts the array by using selection sort
    for(int i=0; i<size; i++)
        for(int x=0+i; x<size; x++){
            if (n[i] > n[x]){
                tempV = n[i];
                n[i]  = n[x];
                n[x]  = tempV;
            }
        }
}

int linSrch(int n[], int size, int answer, int nTimes){
    //Linear Search
    for(int i=0; i<size; i++){
        nTimes++; // Keeps track of the number of attempts
        if (n[i] == answer)
            return nTimes;
    }
    return-1;
}


int binSrch(int n[], int size, int answer, int nTimes){
    int first(0), last(0), mid(0);
    last = size;
    //Binary Search
    while(first<=last){
        nTimes++; // Keeps track of the number of attempts
        mid = (first + last)/2; //Finds the midpoint of the array
        if (n[mid] == answer){
            return nTimes;      //If value is found returns the number of attempts
        }else if (n[mid] > answer){
            last = mid - 1;
        }else{
            first = mid +1;
        }
    }//end of while loop
    return -1; 
}

void prntArr(int n[], int size){
    for(int i = 0; i<size; i++){
        cout<<n[i]<<endl;
    }
}

