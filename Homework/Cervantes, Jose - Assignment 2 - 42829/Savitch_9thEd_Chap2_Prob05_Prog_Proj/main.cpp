/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: Determine if a number of people attending a place is legal
 * Created on March 20, 2016, 3:42 PM
 */

//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    float num, maxnum, extra;
    char ans;
    //ans = the answer if the user wants to repeat the code
    //num = number of people attending the room
    //maxnum = maximum number of people that can be physically be in the room
    //extra = the amount of people that can enter or have to leave the room
//Initialize Variables

//Input Values 
    cout << "This program will tell you if a meeting room is in violation of "
            "fire law regulations regarding the maximum room capacity." << endl;
    cout << endl;
    do
    {
        cout << "Please enter the number of people that will "
                "be in the room:";
        cin  >> num;
        
        cout << "Please enter the maximum amount off people that can physically "
                "be in the room without being fined:";
        cin  >> maxnum;
        cout << endl;
         
        // if the number of people attending the room is less than the maximum 
        // number of people it can hold then this code is ran
        if(num <= maxnum){
            
            //This gets the the number of people that can still attend
             extra = maxnum - num;
             cout << "If " << num << " people attend a room that holds a "
                     "maximum of " << maxnum << " people it will be legal to do so" << endl;
             cout << ",but " << extra << " more people can enter the room." << endl;
             cout << endl;
             cout << "would you like to repeat this program;" << endl;
             cout << "Press Y for yes or N for no. " << endl;
             cin >> ans;
        
         // if the number of people attending the room is more than the maximum 
        // number of people it can hold then this code is ran
        }else{
            
            //This gets the number of people that cant attend
             extra = num - maxnum;
             cout << "If " << num << " people attend a room that holds a "
                     "maximum of, " << maxnum << " it will be illegal to do so," << endl;
             cout << "because it does not meet fire regulation. "
                     "" << extra << "  people may not attend. "<< endl;
             cout << endl;
             cout << "would you like to repeat this program;" << endl;
             cout << "Press Y for yes or N for no. " << endl;
             cin >> ans;
         }
        
             
    }while (ans == 'y'||ans == 'y');

//Map The Inputs to the Outputs
    
//Output the Results

//Exit Stage Right!
    return 0;
}

