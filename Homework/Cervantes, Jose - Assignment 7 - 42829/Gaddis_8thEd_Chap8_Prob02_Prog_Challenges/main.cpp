/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: Lottery winner
 * Created on May 31, 2016, 9:48 AM
 */

#include<iostream>
using namespace std;
int srchArr(int *, int);

//User Libraries

//Global Constants
const int SIZE = 10;

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    int answer(0);
    int loteryN[SIZE] = {13579, 26791, 26792, 33445, 55555, 
                         62483, 77777, 79422, 85647, 93121};
//Initialize Variables
    
//Input Values 
    //Menu
    cout<<"This program checks if the user has the winning lottery numbers."
          ""<<endl<<endl;
    cout<<"Please enter your Lucky 5 digit combination: ";
    cin>>answer;
    
//Map The Inputs to the Outputs
    
//Output the Results
    if (srchArr(loteryN, answer) == 1){
    cout<<"Congratulations you won!!!";
    }else {cout<<"You did not win.";}
    
//Exit Stage Right!
    return 0;
}

int srchArr(int *n, int answer){
//Declared variables
    bool found = false;
    int i=0, value(0);
    
    while (!found){
    //linear search
        if (answer==*(n+i)){
            found=true;
            value = 1;
        }
        if (i == 9){found=true;}// stops the while loop from searching
        
        i++;// increments the array
    }// end of while statement

    return value;
}