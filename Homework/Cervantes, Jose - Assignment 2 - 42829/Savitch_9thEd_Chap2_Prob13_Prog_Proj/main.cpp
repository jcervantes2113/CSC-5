/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: Calculate the BMR of an individual 
 * Created on March 18, 2016, 9:13 PM
 */

//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    float weight, height, age, bmr, numofbrs, numofcal;
    char letter;
    // weight   = the weight of the person
    // height   = the height of the person
    // age      = the age of the person
    // bmr      = Basal Metabolic rate
    // numofbrs = number of bars it takes to full fill ones calories
    // numofcal = number of calories per chocolate bar
//Initialize Variables
    numofcal = 230;
    
//Input Values 
    cout << "This program calculates the number of calories needed for" <<endl;
    cout << "a female or male if he/she does not exercise and the " << endl;
    cout << "amount calories one should consume based on their weight" <<endl;
    
    cout << "" <<endl;
    cout << "Please type (M) for male or (F) for female and "
            "then press enter" << endl;
    //Value to determine if the user is a male or female
    cin  >> letter;
    
//Map The Inputs to the Outputs
    if       (letter=='f'||letter=='F'){
        
        // This line of code asks for the user's weight in pounds
        cout << "Please enter your weight (In pounds ) and then press return: ";
        cin >> weight;
        
        // This line asks for the user height in inches
        cout << "Please enter your height(In Inches) and then press return: ";
        cin >> height;
        
        // This line asks for the user age in years
        cout << "Please enter your age (In years) and then press return: ";
        cin >> age;
        cout << "" <<endl;
        
        // This is the equation thats calculates the BMR(Basal Metabolic rate)
        bmr = (655 + (4.3 * weight) + (4.7 * height) - (4.7 * age));
        cout << "Your BMR is: " << bmr << "";
        numofbrs = bmr / numofcal;
        cout << "" <<endl;
        
        //This block of code shows one number to the right of the decimal point 
        //and tells the user how many chocolate bars one should consume 
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(1);
        cout << "It would take " << numofbrs << " chocolate bars thats 230 "
                "calories each to full fill your BMR " <<endl;
        
    
    } else if(letter=='M'||letter=='m'){
        
        // This line of code asks for the user's weight in pounds
        cout << "Please enter your weight (In pounds) and then press return: ";
        cin >> weight;
        
        // This line asks for the user height in inches
        cout << "Please enter your height (In Inches) and then press return: ";
        cin >> height;
        
        // This line asks for the user age in years
        cout << "Please enter your age (In years) and then press return: ";
        cin >> age;
        cout << "" <<endl;
        // This is the equation thats calculates the BMR(Basal Metabolic rate)
        bmr = (66 + (6.3 * weight) + (12.9 * height) - (6.8 * age));
        cout << "Your BMR is: " << bmr << "";
        numofbrs = bmr / numofcal;
        cout << "" <<endl;
        
         //This block of code show one number to the right of the decimal point 
        //and tells the user how many chocolate bars one should consume 
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(1);
        cout << "It would take " << numofbrs << " chocolate bars thats 230 "
                "calories each to full fill your BMR " <<endl;
        
    }
//Output the Results

//Exit Stage Right!
    return 0;
} 