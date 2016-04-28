/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on April 27, 2016, 1:32 PM
 */


#include<iostream>
using namespace std;

float getLength ();
float getWidth ();
float getArea ();
float displayData ();


//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables

//Initialize Variables

//Input Values 
    
//Map The Inputs to the Outputs
    
//Output the Results
    cout << "This program Displays the area of a rectangle";
    cout << displayData ();

//Exit Stage Right!
    return 0;
}


//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** getLength  ***********************************
 *Inputs
 *      None
 *Outputs
 * 
 * kin_engy --> outputs the kinetic energy of an object
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

float getLength (){
    float length;
    cout << "Please enter the Length of the rectangle: ";
    cin  >> length;
    return (length);
    
}


//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** getWidth  ***********************************
 *Inputs
 *      None
 *Outputs
 * 
 * kin_engy --> outputs the kinetic energy of an object
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

float getWidth (){
    float width;
    cout << "Please enter the Width of the rectangle: ";
    cin  >> width;
    return(width);
    
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** getArea  ***********************************
 *Inputs
 *      None
 *Outputs
 * 
 * kin_engy --> outputs the kinetic energy of an object
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

float getArea (){
    float total;
    total = (getWidth() * getLength()) ;
    return (total);
    
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** displayData  ***********************************
 *Inputs
 *      None
 *Outputs
 * 
 * kin_engy --> outputs the kinetic energy of an object
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

float displayData () {
    cout << getArea();
    
}