/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: Show US and Ireland tax comparison for corperations
 * Created on March 2, 2016, 10:44 AM
 */

//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function  Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
// Declare Variables 
    float ustax;   // United States Taxes
    float irlndtx; // Ireland tax Percent
    float gglincm; // Google's income
    float totalus;   // total amount of revenue generated in U.S.
    float totalirl;   // total amount generated in Ireland
    float totldif; // the total diference
    float amntus; // final amount of money in the U.S. after taxes 
    float amntirl; // final amount of money in Ireland after taxes
    float diff;    // the difference between the two places
//Initialize Variables
    ustax = .391;   // United States Tax Rate For A Corporation
                    //Website I got the information from
                    //http://taxfoundation.org/article/corporate-income-tax-rates-around-world-2014
    
    irlndtx = .125;   //Ireland Tax Rate For A Corporation
                       //Website I got the information from
                        //http://taxfoundation.org/article/corporate-income-tax-rates-around-world-2014
    
    gglincm = 16.35e9f; //Google's income for 2015
                        //Website I got the information from
                        //http://www.statista.com/statistics/266472/googles-net-income/
 
    
//Input Values 
    
//Map The Inputs to the Outputs
    
//Output the Results

cout<<"(This Program calculates the amount of money google makes per year ";
cout<<"in the highest and  lowest tax rate      countries of the world)\n";
cout<<"\n";
totalus = gglincm * ustax;    //This multiplies U.S. tax rate to Googles total income 
amntus = gglincm-totalus;     //This subtracts Googles income from their total tax rate in the U.S.

cout<< "Google would make " << amntus<< " billion if their "; //This displays how much Google makes in the U.S.
cout<< "company was in the U.S.\n";

cout<<"But..\n";
cout<<"\n";

totalirl = irlndtx * gglincm;  // This calculates Google tax deduction in Ireland
amntirl = gglincm - totalirl;  // This Subtracts Googles tax rate (in Ireland) from their income
cout<<"If Google was established in Ireland they would be making ";
cout<< amntirl<<" billion if their company was in Ireland\n"; //This displayes the total amount google makes in Ireland

diff = amntirl- amntus; //This calculates the difference on how much google makes in the U.S. and Ireland
cout<<"\n";

cout<< "google would make "<<  diff << " billion of dollars more if their company was in "; // This Displays how much more money google makes in ireland 
cout<< "Ireland instead of the U.S.\n";
 

//Exit Stage Right!
    return 0;
}