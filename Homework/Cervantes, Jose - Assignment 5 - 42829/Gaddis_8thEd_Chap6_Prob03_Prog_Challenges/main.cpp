/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose:  determines which of a company’s four divisions (Northeast, Southeast
 *           , Northwest, and Southwest) had the greatest sales for a quarter. 
 * Created on April 27, 2016, 10:33 PM
 */

#include <cstdlib>

//User Libraries
#include<iostream>
using namespace std;

float getSales(float nEast, float sEast, float nWest, float sWest);
float findHighest();
//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    

//Initialize Variables

//Input Values 
    
//Map The Inputs to the Outputs
    
//Output the Results
    cout << "This program  determines which of a company’s four divisions \n"
            "(Northeast, Southeast, Northwest, and Southwest) had the greatest \n"
            "sales for a quarter. " << endl;
    cout << findHighest() << "s the highest division";

//Exit Stage Right!
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** getSales  ***********************************
 *Inputs
 *      None
 *Outputs
 * 
 * kin_engy --> outputs the kinetic energy of an object
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

float getSales(){
    float highnum, nEast,  sEast,  nWest,  sWest;
    
    cout << "Enter NorthEast sales: $";
    cin  >> nEast;
    cout << "Enter SouthEast sales: $"; 
    cin  >> sEast;
    cout << "Enter NorthWest sales: $";
    cin  >> nWest;
    cout << "Enter SouthWest sales: $";
    cin  >> sWest;
    
    highnum = nEast;
    
    if(sEast > highnum)
        highnum = sEast;
    if(nWest > highnum)
        highnum = nWest;
    if(sWest > highnum)
        highnum = sWest;
    
    return (highnum);
    
    
}


//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** findHighest  ***********************************
 *Inputs
 *      None
 *Outputs
 * 
 * kin_engy --> outputs the kinetic energy of an object
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
float findHighest(){
   

    return (cout << getSales());
}    