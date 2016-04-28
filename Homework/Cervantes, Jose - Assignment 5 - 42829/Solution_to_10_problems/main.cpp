/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 *
 * Created on April 27, 2016, 11:03 PM
 */


    

#include<iostream>
#include<cmath>
#include <iomanip> 
#include <cstdlib>
#include <ctime>
using namespace std;

void menu ();
void problem1();
void problem2();
void problem3();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    int num;
    char letter;
   
//Initialize Variables

//Input Values 
    

//Output the Results
    do{
        menu ();      // This displays the menu
        cin  >> num;  //This takes in the user input for which problem
        cout << endl;
        
            switch (num){
                case 1: problem1();break;
                case 2: problem2();break;
                case 3: problem3();break;
                case 5: problem5();break;
                case 6: problem6();break;
                case 7: problem7();break;
                case 8: problem8();break;
                case 9: problem9();break;
                case 10: problem10();break;
                default: cout << "Try again." << endl;
            }
        
         cout << "Enter Y to return to the menu again. Else type "
                "anything else to exit.";
         cin >> letter;
    
        
    }while(letter == 'Y' || letter == 'y');
//Exit Stage Right!
    return 0;
}


//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** Menu *********************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void menu (){
//Displays the menu and Input of the user for which problem they want to see
    
    cout << "Please enter a number for whcih number you would like to enter. "
            "" << endl;
    cout << "Enter 1 for problem one." << endl;
    cout << "Enter 2 for problem two." << endl;
    cout << "Enter 3 for problem three." << endl;
    cout << "Enter 5 for problem five." << endl;
    cout << "Enter 6 for problem six." << endl;
    cout << "Enter 7 for problem seven." << endl;
    cout << "Enter 8 for problem eight." << endl;
    cout << "Enter 9 for problem nine." << endl;
    cout << "Enter 10 for problem ten." << endl;
    
    cout << "answer: ";
    
    
}


//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** Problem1 *****************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void problem1(){

    //Declared Variables
    float itm_cst, percnt, price;
    // itm_cst = Item cost
    // percent = The markup percentage of the item
    // price   = The total price of the item

//Initialize Variables

//Input Values 
    cout << "This program calculates an items retail price from its whole"
            "sale cost and its markup percentage" << endl << endl;
    
      float wholsal, percntge;
    
    
    
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
    
    cout << "final cost is " << (wholsal + (wholsal * percntge)) << endl;
    
//Map The Inputs to the Outputs
    
//Output the Results

//Exit Stage Right!
    
    

}



//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** Problem1 *****************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void problem2(){
    
    cout << "This program Displays the area of a rectangle" << endl;
    
    float length, total, width;
    cout << "Please enter the Length of the rectangle(in feet): ";
    cin  >> length;
    
    cout << "Please enter the Width of the rectangle(in feet): ";
    cin  >> width;
    
    total = (width * length);
    cout << "The area is " << total << "(in feet)" <<endl;
    
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** Problem1 *****************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void problem3(){
    
        cout << "This program  determines which of a company’s four divisions \n"
            "(Northeast, Southeast, Northwest, and Southwest) had the greatest \n"
            "sales for a quarter. " << endl;
    
    
    
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
    
    cout << highnum << " is the highest division" << endl;
    
    


    
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** Problem1 *****************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void problem5(){
    
 float value1(0), value2(0), time;
    

//Initialize Variables

//Input Values 
    
//Map The Inputs to the Outputs
    
//Output the Results
    cout << "This program Calculates an object falling time" << endl;
    cout << "Seconds  Meters" << endl;

//This for loop runs 1 through ten and calls the function within the for loop
for (int count = 1; count <=10; count++){   
   
   
   float distance, g;
    
    g = 9.8;
    static int time = 1; //This keeps the original value of time so it outputs 
                         // a different value every time the loop is ran
    
    distance = (g * pow(time,2))/2; // This equation calculates the free fall time
    time ++;                        // over time++
    
    cout << count <<"        "<< distance << endl;
    
}
   
}


//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** Problem1 *****************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void problem6(){
    
   cout << "This program calculates the kinetic energy of of an object." << endl;

   //function call
   

    
    float mass, velocity;
    float kin_engy;
    cout << "Please enter the mass of the object in kilograms: ";
    cin  >> mass;
    
    cout << endl;
    
    cout << "Please enter the velocity of the object in meters per seconds: \n";
    cout << "How many meters did the object travel in one second: ";
    cin  >> velocity; 
    
    kin_engy = (mass * pow(velocity, 2))/2; // formula used
    
    cout << "The kinetic energy is " << kin_engy << endl; // displays the answer
}


//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** Problem1 *****************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void problem7(){
    //Declared Variables
    int count;
    

//Initialize Variables

//Input Values 
    
//Map The Inputs to the Outputs
    
//Output the Results
    cout << "This program displays the Fahrenheit and Celsius conversion of 0 - 20.";
    cout << endl << endl;
    
    cout << "Fahrenheit  Celsius" << endl;
    for (count = 0; count <= 20; count++){
       
        //This displays the result and the function
        
    


//Exit Stage Right!
    
    float c_temp;
    //c_temp = contains the final conversion of Fahrenheit to Celsius 
    
    //This keeps the original value of the temperature from the previous loop
    static float f_temp = 0; 
    
    c_temp = (5 * (f_temp - 32))/9;// This convert Fahrenheit to Celsius
    f_temp++; // This increments f_temp by 1 to change its value 
    
   
    cout << count << "           " << c_temp << endl;
}
    
}


//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** Problem1 *****************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void problem8(){
    
    cout << "This program flips a coin, based on the number of times you enter.";
    cout << endl << endl;
    
    cout << "Please enter the number of times you would like to flip the coin: ";
    
    

    
    
    
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
        
    
    }// For loop end
    
   
}

    
}


//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** Problem1 *****************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void problem9(){
    cout << "This Program calculates the amount of money you need to invest to "
            "attain $10,000 dollars in ten years" << endl;
    
    
    
    
    
    
    float P, r, n, F;
    // P = current value, in his or her bank account 
    // r  = interest per year, percentage
    // n = number of years, 10 is the defaulft value
    // F  = future value
    
    //Inputs
    cout << "Please enter the annual interest rate(In percent): ";
    cin  >> r;
    
    cout << "Please enter the number of years you plan on compounding: ";
    cin  >> n;
    
    cout << "Please enter the amount you would like to achieve(In Dollars): ";
    cin  >> F;
    
    //Equation
    P = F/((pow(1 + (r * 0.01), n ))); // This calculates the amount needed
                                       // to achieve the desire amount
    //Output
    cout << "You would need a balance of $"<< P << " To acheive your"
                " goal of $" << F << endl; 
        
        
        
    
    



    
}


//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** Problem1 *****************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void problem10(){
    
 //Declared Variables
    float pValue, mInterst, nMonths;

//Initialize Variables

//Input Values 
    
//Map The Inputs to the Outputs
    
//Output the Results
    cout << "This program calculates the amount of money you will have "
            "after a specific number of months. " << endl << endl;
    
    cout << "Please enter the present value of your account in dollars: $";
    cin  >> pValue;
    
    cout << "Please enter the monthly interest in percent: %";
    cin  >> mInterst;
    
    cout << "Please enter the number of months you are letting your money compund: ";
    cin  >> nMonths;
    
    

    

    float fValue;
    
    fValue = pValue * pow(1+(mInterst * 0.01), nMonths);
    
    cout << "Your balance is: $" <<fValue << endl;

    
}