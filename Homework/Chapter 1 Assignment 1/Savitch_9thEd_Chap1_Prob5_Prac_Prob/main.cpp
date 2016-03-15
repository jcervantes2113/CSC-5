/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose; Calculate total length of a fence
 * Created on March 4, 2016, 6:03 PM
 */



//User Libraries
 #include <iostream>
 using namespace std;

//Global Constants

//Function Prototypes

//Execution Begin Here!


//Declare Variables
    
//Initialize Variables
    
//input values
    
//Map the inputs to the outputs
    
//Output the results
   

 int main( )
{
int length;   // Length of rectangle
int width;     // width of rectangle
int ttlnght;       //total length

cout<<"This program tells you the perimeter of an enclosed space\n";
cout<<"\n";
cout << "(Press return after entering a number).\n";
cout << "\n"; //spacing
cout << "Enter the Width of the enclosed space (in feet)\n";
cin >> width ;  //input value for width

cout << "\n";  //spacing

cout << "Enter the length of the enclosed space (in feet)\n";
cin >> length;  //input value for length

cout<<"\n";    //spacing

ttlnght = (length*2) + (2*width);  // equation to calculate total feet
cout<<"The amount of fence you need is "<<ttlnght<<" feet\n";


 


return 0; 
 }