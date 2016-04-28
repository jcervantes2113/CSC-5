/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on April 26, 2016, 6:46 PM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int coinToss();


/*
 * 
 */
//User Libraries


//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables

//Initialize Variables

//Input Values 
    
//Map The Inputs to the Outputs
    
//Output the Results
    cout << "This program flips a coin, based on the number of times you enter.";
    cout << endl << endl;
    
    cout << "Please enter the number of times you would like to flip the coin: ";
    
    coinToss(); // Calls the function

//Exit Stage Right!
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/***************************** coinToss  ***************************************
 *Inputs
 *  flips-->gets the number of times to run the for loop
 *Outputs
 *  outputs heads or tails based on the number generated of 1 or 2
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

int coinToss (){
    
    int count, limit, flips;
    
    cin >> flips; 
    
    srand(time(0)); //This sets a random number based on time
    
    for (count = 1; count <= flips; count++){
    
        //This sets a random number from 1 to 2 by dividing 2 from rand and 
        // adding 1 to it
        limit = (rand() % 2) +1;

        if (limit == 1){ // if the number generated is 1 then its Heads
            cout << "Head" << endl;
        }else {  // if the number generated is 2 then its Tails
            cout << "Tails" << endl;
        }
    
    }// For loop end
    
   
}
