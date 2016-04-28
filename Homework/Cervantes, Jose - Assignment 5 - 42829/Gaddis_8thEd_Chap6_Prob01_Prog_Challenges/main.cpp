/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on April 25, 2016, 10:22 AM
 */

//User Libraries
#include<iostream>
using namespace std;

float cal_retail (float wholsal, float percent);


//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    float itm_cst, percnt, price;
    // itm_cst = Item cost
    // percent = The markup percentage of the item
    // price   = The total price of the item

//Initialize Variables

//Input Values 
    cout << "This program calculates an items retail price from its whole"
            "sale cost and its markup percentage" << endl << endl;
    
    cout <<  cal_retail ( itm_cst,  percnt);
    
//Map The Inputs to the Outputs
    
//Output the Results

//Exit Stage Right!
    return 0;
}


//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** cal_retail ***************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

float cal_retail (float wholsal, float percntge){
    
    
    
    cout << "Please enter the wholesale cost of the item in dollars. (EX: "
            "$15.00): $";
    
    //This do statement runs the cin statement again and again until the user 
    // enters a positive integer     
    do {
        cin  >> wholsal;
        
        //This if statement checks the integer to see if wholsal is a negative number
        if (wholsal < 0){
             cout << "You cant enter a negative number please try again: ";
        }
    }while (wholsal < 0);
    
    
    cout << "Please enter the mark up percentage of the item. (EX: 5%, 50%): %";
    
    //This do statement runs the cin statement again and again until the user 
    // enters a positive integer 
    do { 
        
        cin  >> percntge;
        percntge = percntge * .01; // This changes the integer to a percentage
        
        
        //This if statement checks the integer to see if percntge is a negative number
        if (percntge < 0){
             cout << "You cant enter a negative percentage please try again: ";
        } 
    }while (percntge < 0);
    
    return (wholsal + (wholsal * percntge));
}