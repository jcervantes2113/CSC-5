/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose Calculates interest rate of a given amount
 * Created on March 27, 2016, 6:27 AM
 */

//User Libraries
#include<iostream>
using namespace std;
/*
Write a program to compute the interest due, total amount due, and the minimum 
payment for a revolving credit account. The program accepts the account balance 
as input, then adds on the interest to get the total amount due. The rate schedules 
are the following: The interest is 1.5 percent on the first $1,000 and 1 percent on 
any amount over that. The minimum pay-ment is the total amount due if that is $10 
or less; otherwise, it is $10 or 10 percent of the total amount owed, whichever is 
larger. Your program should include a loop that lets the user repeat this calculation 
until the user says she or he is done.
*/


//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    float amount, ttlamnt, intst, ovintst, fsthsnd, newamnt, limit ;
    char ans;
    //amount   = 
    //ttlamnt  = total amount of money they took out 
    //intst    = interest rate for the first thousand
    //ovintst  = interest rate for every dollar over 1000
    //fstthsnd = interest rate for the first thousand
    //limit    = choice for the user
    //ans      = answer of the user if they want to repeat the code
    

//Initialize Variables
    intst   = 0.015f; // 1.5%
    ovintst = 0.01f;  // 1%
    fsthsnd = 1000;   // 1000 dollars

//Input Values 
    cout << "Please enter 1 if your loan does not exceeds 1000 dollars\n"
            "Please enter 2 if your loan exceeds 1000 dollars: ";
    cin  >> limit;

//Map The Inputs to the Outputs
   
  //This do while loop calculates the interest rate for the amount thats over
  //1000 dollars
    if       (limit ==1 ){
        do{
            cout << endl;
            cout << "Please enter your loan amount that is less than 1000 dollars: ";
            cin  >> amount;
            ttlamnt = (amount * intst); // equation for the interest amount
            cout << "Your total interest of 1.5% on your " << amount << " dollar loan "
                    "is " << ttlamnt << " dollars." << endl;;
            cout << "Enter Y if you would like to input a new amount or input N"
                    "if you would like to stop: ";
            cin  >> ans;
            cout << endl;
        }while(ans == 'Y' || ans == 'y');
        
   
   //This do while loop calculates the interest rate for the amount thats over
   //1000 dollars
    }else if (limit == 2) {
        do{
            cout << endl;
            cout << "Please enter your loan amount that exceeds 1000 dollars: ";
            cin  >> amount;
            fsthsnd = fsthsnd * intst; // equation for the interest amount on the first thousand
            amount  = amount - 1000;   // Equation that subtract 1000 dollars
            newamnt = amount * ovintst;// equation for the interest amount for the remaining amount   
            cout << endl; 
            cout << "Since your amount exceeds 1000 dollars, every dollar over\n"
                    "1000 dollars is charged at a rate of 1%." << endl;
            cout << "Your interest on your first 1000 at 1.5% is " << fsthsnd << endl;
            cout << "The remaining " << amount << " dollars is charged at 1"
                    "% which is " << newamnt << " dollars." << endl;;
            cout << "Enter Y if you would like to input a new amount or input N"
                    " if you would like to stop: ";
            cin  >> ans;
            cout << endl;
      
        }while(ans == 'Y' || ans == 'y');
        
    }else {
        cout << "You did not enter 1 or 2";
    }
    
//Output the Results

//Exit Stage Right!
    return 0;
}
