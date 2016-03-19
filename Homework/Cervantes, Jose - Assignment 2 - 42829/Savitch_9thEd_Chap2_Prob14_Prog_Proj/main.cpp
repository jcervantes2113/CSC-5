/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: To Calculate the total grade of a
 * Created on March 18, 2016, 5:41 PM
 */

//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    float score, totlscr, numoftst, avrge, sumttsc, sumscre, fnlpcnt;
    
    // score    = score you got on the test.
    // totlscr  = total score possible.
    // numoftst = number of test.
    // avrge    = average of all the scores combined.
    // sumttsc  = sum of total score possible of each test.
    // sumscre  = sum of score received on each test.
    // fnlttal  = final percentage of every score added up.
  
//Initialize Variables
    
//Input Values 
   //This block of code tells the user how many times they want the code to 
   //run to input the test scores for each occasion.
    cout << "This program calculate's your overall score for "
            "each test you took" << endl;
   //Spacing for the code.
    cout << "" << endl;  
    cout << "How many exercises do you want to input: ";
    cin  >> numoftst; 
    
    while (numoftst > 0) {
        
   // This block tells the user to input the score they received .
        cout << "Enter the score you received for exercise " 
             << numoftst << ":";//
  
   // (cin)input value for the score they got.
        cin  >> score;   
        cout << "Enter the total amount of points possible on the test"
                " for exercise " << numoftst << ":";
   
   // (cin)input value for the total points possible they could receive. 
        cin  >> totlscr;
        avrge = score / totlscr;
   
   // cout displays the percentage and score for that paticular exercise
        cout << "Your total is " << score << " out of " << totlscr << " which equals to " 
             << avrge << "%" << endl;
        cout << "" << endl;
        
        numoftst = numoftst -1;
        
   //These two lines of codes adds up the total score they received and 
   //the total amount of points possible and outputs an overall percentage.
        sumttsc += score ;
        sumscre += totlscr;
        
        fnlpcnt = (  sumttsc/sumscre);  
        
        
        
        }
   //This line displays the average of percentage of the total score added up.
    cout << "your total is " << sumttsc << " out of " << endl;
    cout << sumscre << " which " << endl;
    cout << "equals to" << fnlpcnt << "%.";
    cout << " " << endl;
        
//Map The Inputs to the Outputs
    
//Output the Results
    
//Exit Stage Right!
    return 0;
}