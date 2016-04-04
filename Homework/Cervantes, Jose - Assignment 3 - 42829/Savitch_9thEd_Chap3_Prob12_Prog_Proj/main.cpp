/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: The game of 23
 * Created on March 26, 2016, 6:31 PM
 */

//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    short total, numofpk, newtotal;

//Initialize Variables
    total = 23;
    
//Input Values 
    cout << "The game of “23” is a two-player game that begins with a pile of 23 \n"
            "tooth- picks. Players take turns, withdrawing either 1, 2, or 3 \n"
            "toothpicks at a time. The player to withdraw the last toothpick loses "
            "the game" << endl;
    cout << endl;
    cout << endl;
    
    cout << "Please enter the amount of tooth picks you would like to remove from"
            " the pile of 23: ";
    cin >> numofpk;
    
    //If this is false it uses the other else statement and tells the user to 
    //input a true value 
    if (numofpk <=3 && numofpk >=1) { 
        
        while (total >= 10 &&  numofpk <=3 && numofpk >=1){ 
            //This tells the user how many tooth picks are left based on their
            //answer and this equation calculates it
                cout << "Your move leaves the total of tooth picks at: ";
                total = total - numofpk;
                cout << total;
                cout << endl;
                
            //This tells the user how many tooth picks the computer took based 
            //on their answer this equation subtracts four from their original 
            //response and uses that as their answer
                cout << "The computer move leaves it at: ";
                newtotal = total - (4 - numofpk);
                cout << newtotal;
            
            //Spacing
                cout << endl;
                cout << endl;

            //This instructs the user to input a new answer and keeps on telling 
            //him to input their answer until the total number of tooth-picks is
            //false.
                cout << "Please enter the amount of tooth picks you would like to remove from"
                    " the pile of " << newtotal << ":";
                cin >> numofpk;
                
            //This statement updates the total number of tooth-picks with the 
            //the computers final choice.
                total = newtotal;
            
            //This statement is used if the user inputs a number thats not within the rules
            
            if (numofpk >= 4){
             cout << endl;
             cout << "You did not enter 1, 2, or 3.";
         }
             
    }
        //This statement is used if the user inputs a number thats not within the rules
    } else {
        cout << endl;
        cout << "You did not enter 1, 2, or 3.";
    }
    
if ( newtotal >=0){
    cout << endl;
        cout << "You lost";
} else {
    cout << endl;
        cout << "You Won";
}
    
//Map The Inputs to the Outputs
    
//Output the Results

//Exit Stage Right!
    return 0;
}
