/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on March 27, 2016, 5:13 AM
 */

//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    char userone, usertwo, ans;

//Initialize Variables
    
//Input Values 
    cout << "This program is a game called Rock Paper and Scissors.";
    cout << endl;
    cout << endl;
          
 do{
     cout << "User two please look away.\n";
     cout << "User one please enter R for rock, P for paper, S for scissors: ";
     cin >>userone;
     
     cout << endl;
    
     cout << "User one please look away.\n";
     cout << "User two please enter R for rock, P for paper, S for scissors: ";
     cin >> usertwo;
    
     if ((userone == 'p'&& usertwo == 's') || (userone == 's'&& usertwo == 'p')){
        cout << "Paper cuts Scissors. Scissors wins.";
        
    }else if ((userone == 'p' && usertwo == 'r' )|| (userone == 'r' && usertwo == 'p')){
        cout << "Paper covers Rock. Paper wins.";
        
    }else if ((userone == 'r' && usertwo == 's') || (userone == 's' && usertwo == 'r')){
        cout << "Rock breaks Scissors. Rock wins.";
        
    }else if ((userone == 'R'&& usertwo == 'S') || (userone == 'S'&& usertwo == 'R')){
        cout << "Rock breaks Scissors. Scissors wins.";
        
    }else if ((userone == 'P' && usertwo == 'R' )|| (userone == 'R' && usertwo == 'P')){
        cout << "Paper covers Rock. Paper wins.";
        
    }else if ((userone == 'P' && usertwo == 'S')||(userone == 'S' && usertwo == 'P')){
        cout << "Scissors cuts Paper. Rock wins.";
        
    }else if (userone == usertwo ){
        cout << "Nobody Wins.";
 
    }else {
        cout << endl;
        cout << "You did not enter R, P, or S!!!!!!!!";
    }
     cout << endl;
     cout << endl;
    cout << "Do you want to play again. Press Y for yes or N for no (Then Press "
            "enter).";
    cin >> ans; 
    cout << endl;
 }while (ans == 'y'||ans == 'Y');    
//Map The Inputs to the Outputs
    
//Output the Results

//Exit Stage Right!
    return 0; 
}
