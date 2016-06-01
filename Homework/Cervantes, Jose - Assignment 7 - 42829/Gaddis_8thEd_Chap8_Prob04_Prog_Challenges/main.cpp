/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on May 31, 2016, 12:27 PM
 */

#include <iostream>
using namespace std;

void sortArry(int *, int);
void prntArr(int *, int);
int binSrch (int *, int, int);


//User Libraries

//Global Constants
const int SIZE = 18;

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

//Declared Variables
    int answer(0);
    int accntN[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 
                        1302850, 8080152, 4562555, 5552012, 5050552,
                        7825877, 1250255, 1005231, 6545231, 3852085,
                        7576651, 7881200, 4581002};
//Display the results
    cout<<"This is the list you choose from."<<endl;
    
    for (int i=0; i<SIZE; i++){
        cout<<accntN[i]<<endl;
    }
    
    //Menu
        cout<<endl<<endl<<endl;
        cout<<"This program tells the user whether or not his/her"
                "account number is Valid or invalid."<<endl;
        
    //Sort array
        sortArry(accntN, SIZE);
        
    //Print Array
        //prntArr(accntN, SIZE);
        
    //Input
        cout<<"Please enter your account number: ";
        cin>>answer;
        cout<<endl<<endl;
        
    // Search array 
        if (binSrch (accntN, SIZE, answer) == 1){
            cout<<"Your account number is valid";
        }else{
            cout<<"Your account number is invalid";
        }
    
//Exit Stage Right!
    return 0;
}



int binSrch (int *n, int size, int answer){
//Declared variables   
    int first(0), last(0), mid;
    bool found = false;
    
//Initialized Variables
    last = size - 1;
    first= 0;
    
//Binary Search    
    while (!found && first <= last){
        mid = (first + last)/2;
        
        if (answer == *(n+mid)){
            found = true;
            return 1;
        }else if(answer < *(n+mid)){
            last = mid - 1;
        }else{
            first = mid +1;
        }//end of else statement 
        
    }//end of while statement 
}//end of function

void sortArry(int *n, int size){
    int tempV(0);
    for (int i=0; i<size; i++)
        for(int x=i+0; x<size; x++){
            if (*(n+i) > *(n+x)){
                tempV  = *(n+i);
                *(n+i) = *(n+x);
                *(n+x) = tempV;
            }//end of if statement
        }//end of for loop
}//end of function


void prntArr(int *n, int size){
    for (int i=0; i<size; i++){
        cout<<*(n+i)<<endl;
    }
}