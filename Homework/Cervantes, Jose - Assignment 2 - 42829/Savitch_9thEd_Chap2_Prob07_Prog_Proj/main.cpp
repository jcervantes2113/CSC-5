/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: this program calculates the inflation of a price over a number of years
 * Created on March 19, 2016, 9:54 PM
 */

//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    float rate, price, year, total, years, total1, tax;
    
//Initialize Variables
    year = 0;

//Input Values 
    
    cout << "Please enter the total price (In dollars) of the "
            "object or objects you want to purchace: ";
    cin  >> price;
    cout << "Please enter the number of years that will pass until "
            "you plan to buy this item in: ";
    cin  >> years;
    cout << "Please enter the rate of inflation per year (in percent %) that will occur "
            "over the next " << years << " years: ";
    cin  >> rate;
    cout <<endl;
    
//Map The Inputs to the Outputs
    
    //This else statement takes the rate any number that is less than 
    //.99 percent because this equation will not work awith any percent that 
    //is higher than .99 
    if (rate <= .99 && years >= 0){
        while (rate <= .99 && years >= year){
            
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);
            
            
            //This calculates the total rate at which the price will increase
            //for each year
            total = price + (((rate * 0.001)*price) * year);
            year = year + 1;
            
            //This sets the answer two decimal places to the right
            cout <<"In "<< year <<" years the price will be: ";
            //This displays the total amount of 
            cout << total <<endl;
        }
    
    //This else statement takes the rate of any number that is less than 
    //9.99 percent because this equation will not work with any percent that 
    //is higher than 9.99 percent or less than 1 percent 
    }else if (rate <= 9.99 && years >= 0 && rate >= 1){
        
        while (rate <= 9.99 && years >= year){

            //This sets the answer two decimal places to the right
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);
            
            //This calculates the total rate at which the price will increase
            //for each year
            total = price + (((rate * 0.001)*price) * year);
            year = year + 1;
            cout <<"In "<< year <<" years the price will be: ";
            
            
            //This displays the total amount of 
            cout << total <<endl;
        
        }
    
    //This else statement takes the rate of any number that is greater than 
    //10 percent because this equation will not work with any percent that 
    //is higher than 99.9 or less than 10 percent 
    }else if (rate >= 10 && years >= 0 && rate <= 99.9){
        while (rate >= 10 && years >= year){
 
            
            //This sets the answer two decimal places to the right
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);
            
            //This calculates the total rate at which the price will increase
            //for each year
            total = price + (((rate * 0.01)*price) * year);
            year = year + 1;
            cout <<"In "<< year <<" years the price will be: ";
            //This displays the total amount of 
            cout << total <<endl;
            
           
        }
       
    //This else statement takes the rate  of any number that is greater than 
    //100 percent because this equation will not work with any percent that 
    //is higher less than 100 
    }else if (rate >= 100 && years >= 0  ){
        while (rate >= 100 && years >= year){
            
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);
            
            
            //This calculates the total rate at which the price will increase
            //for each year
            total = price + (((rate * 0.1)*price) * year);
            year = year + 1;
            
            //This sets the answer two decimal places to the right
            cout <<"In "<< year <<" years the price will be: ";
            //This displays the total amount of 
            cout << total <<endl;
        }
    
        
    }
    
        
//Output the Results

//Exit Stage Right!
    return 0;
}
