/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: Copy figure 1.8 exactly and run it
 * Created on March 3, 2016, 6:23 PM
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
int number_of_pods; 
int peas_per_pod; 
int total_peas;

cout<<"This program tells you how many peas are in per pod\n";
cout<<"\n";
cout << "Press return after entering a number.\n";
cout << "Enter the number of pods:\n";

cin >> number_of_pods;

cout << "Enter the number of peas in a pod:\n";
cin >> peas_per_pod;
total_peas = number_of_pods * peas_per_pod;
cout << "If you have ";
cout << number_of_pods;
cout << " pea pods\n";
cout << "and ";
cout << peas_per_pod;
cout << " peas in each pod, then\n";
cout << "you have ";
cout << total_peas;
cout << " peas in all the pods.\n";
return 0; 
 }