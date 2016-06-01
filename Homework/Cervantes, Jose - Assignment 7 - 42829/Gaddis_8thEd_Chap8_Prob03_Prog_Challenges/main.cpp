/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on May 31, 2016, 10:32 AM
 */

#include<iostream>
using namespace std;

void sortArry(int *,int);
int binSrch(int *, int, int);

//User Libraries

//Global Constants
const int SIZE = 10;

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    bool value;
    int answer(0);
    int loteryN[SIZE] = {79422, 62483, 77777, 85647, 55555, 
                         26791, 26792, 93121, 33445, 13579};
//Initialize Variables
    
//Input Values 
    //Menu
    cout<<"Please enter a your lucky 5 digit lottery number: ";
    cin>>answer;
    
//Map The Inputs to the Outputs
    
//Output the Results
    //sort the array
    sortArry(loteryN, SIZE);
    
    //Search the array
    if (binSrch(loteryN, SIZE, answer) == 1){
        cout<<"Congratulations you Won!!!!";
    }else{
        cout<<"Sorry You Lost."; }
  
//Exit Stage Right!
    return 0;
}

int binSrch(int *n, int size, int answer){
    bool found = false;
    int mid(0);
    int first(0);
    int last = size - 1;
    
    while (!found && first <= last){
        mid = (first + last)/2;
        
        if(answer == *(n+mid)) {
            return 1;
            
        }else if(*(n+mid) > answer){
            last = mid-1;
        }else {
            first = mid+1;
        }//End of else statement 
    }//End of WHile loop
}//End of the function


void sortArry(int *n, int size){
    int tempV;
    for(int i = 0; i < size; i++)
        for (int x = i+1; x < size; x++){
            if (*(n+i) > *(n+x)){
                //Swap
                tempV  = *(n+i);
                *(n+i) = *(n+x);
                *(n+x) = tempV;
                
            }// end of if statement
        }// end of for loop
}//end of function