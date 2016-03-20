/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: Reads 10 whole numbers and outputs their sum
 * Created on March 19, 2016, 10:25 AM
 */

//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    float numofin, postotl, negtotl, totlsum, x;
    //numofin = number of integers thats inputed
    //postotl = positive total of all the positive integers added up
    //negtotl = negative total of all the negative integers added up
    //totlsum = total sum of all the numbers added up both positive and negative

//Initialize Variables

//Input Values 
    
//Map The Inputs to the Outputs
    
    //This block of code tells the user to input how many numbers they
    //want to add all together
    cout << "This program calculates the sum of the negative, positive, and all "
            "the integers you enter" << endl;
    cout << "(After you enter the digit press enter)" << endl;
    cout << endl;
    cout << "Please enter How many integers do you want to add up: ";
    cin >> numofin;
    
   // If the user dose not enter a value greater than zero than it will show the
   // other else if statement
   if (numofin>0){
        
        //This block of code repeats the code for the number of values thats
        //being inserted
        while (numofin > 0){
                cout << "Please enter the " << numofin << " digit: ";
                cin >> x;
                numofin = numofin - 1;
          
        // This if statement separates all the  positive integers from the 
        //negative integers and then adds all them up
          if (x >= 0){
                totlsum += x;
             
        // This else if statement separates all the negative integers from the
        // the positive integers and then adds them all up
          }else if(x<0) {
                negtotl += x;
          }
          } //This bracket goes with the while statement
   
    // This tells the user that they did not enter a positive value
   }else {
     cout <<"" <<endl;
     cout << "YOU DID NOT ENTER A NUMBER OR A POSITIVE NUMBER!!!!";
     cout <<""<<endl;
  }
    
    //This block of code displays the sum of every integer thats not entered
    cout << "" << endl;
    cout << "The sum of all of the positive numbers is " << totlsum << endl;
    cout << "" << endl;
    cout << "The sum of all of the negative numbers is " << negtotl << endl;
    cout << " " << endl;
    totlsum = totlsum + negtotl;
    cout << "The sum of all of the numbers is: " << totlsum << endl;
    cout << "" << endl;
   
//Output the Results

//Exit Stage Right!
    return 0;
}
