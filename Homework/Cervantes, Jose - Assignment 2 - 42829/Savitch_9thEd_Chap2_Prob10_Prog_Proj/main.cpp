/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on March 18, 2016, 11:55 PM
 */

//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    float numofin, postotl, negtotl, totlsum, x, avrge, pstvenum, negnum, avrgeneg;
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
                numofin  =  numofin - 1;
                
                
          
        // This if statement separates all the  positive integers from the 
        //negative integers and then adds all them up
          if      (x >= 0){
                totlsum += x;            //this stops the if statement
                pstvenum = pstvenum + 1; //this adds up all the positive numbers
             
        // This else if statement separates all the negative integers from the
        // the positive integers and then adds them all up
          }else if(x < 0) {
                negtotl  -= x;         //this stops the if statement
                negnum   = negnum + 1; //this adds up all the negative numbers
                
          }
          } //This bracket goes with the while statement
   
    // This tells the user that they did not enter a positive value
   }else {
     cout <<"" <<endl;
     cout << "YOU DID NOT ENTER A NUMBER OR A POSITIVE NUMBER!!!!";
     cout <<""<<endl;
  }
    
    //This block of code displays the sum of every positive integer thats not entered
    cout << "" << endl;
    cout << "The sum of all of the positive numbers is: " << totlsum << endl;
    
    //This Block of code displays the average of every positive integer
    avrge = (totlsum/pstvenum); //This equation finds the average of all positive numbers
    cout << "The average of all the positive number "
            "is: "<< avrge <<endl;
    cout << "" << endl;
    
    //This line of code displays the sum of all negative numbers
    cout << "The sum of all of the negative numbers is: -" << negtotl << endl;
    
    //These lines of codes displays the average of all negative numbers added up
    avrgeneg = (negtotl/negnum); //this equation finds the avrge of all negative numbers
    cout << "The average of all the negative number "
            "is: -" << avrgeneg <<endl;
    cout << " " << endl;
    
    //This block of code displays the total sum  of both the negative numbers
    //and positive numbers
    totlsum = totlsum + negtotl;
    cout << "The sum of all of the numbers is: " << totlsum << endl;
    
    //This block of code displays the average of the negative and positive 
    //numbers that were added up
    avrge = totlsum/(negnum+pstvenum);
    cout << "The average of both negative and positive numbers is: "
            "" << avrge;
    cout << "" << endl;
   
//Output the Results

//Exit Stage Right!
    return 0;
}
