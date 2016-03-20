/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: Calculate a workers wage
 * Created on March 20, 2016, 12:16 PM
 */

//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    float hours, ovetime, totlwge, payrate, statetx, fedlincm, fedincmrte, 
          sstax, unondue, sstaxrte, statetxrte, depndts, dpnttax, ovetimrte,
          totlamnt, totlove, grndttl;
    // hours    = Number of hours the person worked
    // ovetime  = This calculates the total amount of overtime hours worked
    // totlwge  = This calculates the total amount the person made without overtime
    // statetx  = (state income tax )This calculates the amount the state takes of the total wage
    // fadlincm = this calculates how much the (Federal income tax) takes of the total wage
    // sstax    = This calculates hoe much the (the social security tax) takes off
    // depndts  = This is for the number of dependents the worker has
    // totlamnt = This calculates the total amount of money the worker received excluding overtime
    // totlove  = This calculates the total amount of overtime  
    // grndttl  = This calculates the grand total the worker made with the deductions
//Initialize Variables
    sstaxrte   = 0.06;  // This is how much the (social security tax rate takes off their check)
    fedincmrte = 0.14f; // This is the (federal income rate) 
    statetxrte = 0.05;  // This is how much the (state tax rate) takes off the workers check
    unondue    = 10;    // This is how much every worker is deducted off their check (union due)
    dpnttax    = 35;    // If the worker has more than 3 dependents then 35 dollars is deducted from their check
    payrate    = 16.78; // This is the pay rate at which the workers get paid 
    ovetimrte  = 25.17; // This is the overtime pay rate
//Input Values 
    cout << "Please enter the amount of hours you worked: ";
    cin  >> hours;
    cout << "Please enter the amount of dependents you have in your"
            " household: ";
    cin  >> depndts;
    
//Map The Inputs to the Outputs
    
    // If the worker worked less or equal to 40 hours and has less than 3 dependents than this code is executed
    if (hours <= 40 && depndts <=2) {
        totlwge = hours * payrate;
        cout <<"You worked a total of " << hours << " hours at $" << payrate << ""
                " dollars the hour which gives you a total of $" << totlwge << ""
                " dollars" << endl;
        //This calculates the social security tax
        sstax    = totlwge * sstaxrte;
        
        //This calculates the federal income tax
        fedlincm = totlwge * fedincmrte;
        
        //this calculates the state income tax
        statetx  = totlwge * statetxrte;
        
        cout << "But uncle sam takes off. " << endl;
        cout <<"$"<< sstax    <<  " For Social Security tax."  <<endl;
        cout <<"$"<< fedlincm <<  " For Federal income tax."   <<endl;
        cout <<"$"<< statetx  <<  " For State Income tax."     <<endl;
        cout <<"$"<< unondue  <<  " For union dues."           <<endl;
        
        //This calculates the grand total of the workers wage with all the deductions
        cout << endl;
        grndttl = totlwge-(sstax + fedlincm + statetx + unondue);
        cout << "Which gives you a grand total of " << grndttl;
    
        
    // If the worker worked less or equal to 40 hours and has more than 3 dependents than this code is executed    
    }else if (hours <= 40 && depndts >= 3 ) {
        totlwge = hours * payrate;
        cout <<"You worked a total of " << hours << " hours at $" << payrate << ""
                " dollars the hour which gives you a total of $" << totlwge << ""
                " dollars" << endl;
        //This calculates the social security tax
        sstax    = totlwge * sstaxrte;
        
        //This calculates the federal income tax
        fedlincm = totlwge * fedincmrte;
        
        //this calculates the state income tax
        statetx  = totlwge * statetxrte;
        
        cout << "But uncle sam takes off. " << endl;
        cout <<"$"<< sstax    <<  " For Social Security tax."  <<endl;
        cout <<"$"<< fedlincm <<  " For Federal income tax."   <<endl;
        cout <<"$"<< statetx  <<  " For State Income tax."     <<endl;
        cout <<"$"<< unondue  <<  " For union dues."           <<endl;
        cout <<"$"<< dpnttax  <<  " For health insurance";
        
        //This calculates the grand total of the workers wage with all the deductions
        cout << endl;
        grndttl = totlwge-(sstax + fedlincm + statetx + unondue + dpnttax);
        cout << "Which gives you a grand total of " << grndttl;
          
        
    // If the worker worked more or equal to 41 hours and has less than 3 dependents than this code is executed      
    }else if (hours >= 41 && depndts <=2) {
        totlwge  = hours * payrate;
        ovetime  = (hours - 40);
        totlove  = ovetime * ovetimrte;
        totlamnt = totlwge + totlove;
        cout <<endl;
        cout << "You worked a total of " << hours << " hours at $" << payrate << ""
                " dollars the hour which gives you a total of $"  << totlwge << " dollars. " << endl;
        cout << "But you worked " << ovetime << " hours thats overtime"
                " at a rate of " << ovetimrte << " the hour  which gives you a"
                " total of " << totlamnt;
        cout << endl;
        cout << endl;
        
        //This calculates the social security tax
        sstax    = totlwge * sstaxrte;
        
        //This calculates the federal income tax
        fedlincm = totlwge * fedincmrte;
        
        //this calculates the state income tax
        statetx  = totlwge * statetxrte;
        
        cout << "But uncle sam takes off. " << endl;
        cout <<"$"<< sstax    <<  " For Social Security tax."  <<endl;
        cout <<"$"<< fedlincm <<  " For Federal income tax."   <<endl;
        cout <<"$"<< statetx  <<  " For State Income tax."     <<endl;
        cout <<"$"<< unondue  <<  " For union dues."           <<endl;
        
        //This calculates the grand total of the workers wage with all the deductions
        cout << endl;
        grndttl = totlamnt - (sstax + fedlincm + statetx + unondue);
        cout << "Which gives you a grand total of " << grndttl;
          
        
    // If the worker worked more or equal to 41 hours and has more than 2 dependents than this code is executed 
    }else if (hours >= 41 && depndts >= 3) {
        totlwge  = hours * payrate;
        ovetime  = (hours - 40);
        totlove  = ovetime * ovetimrte;
        totlamnt = totlwge + totlove;
        cout <<endl;
        cout << "You worked a total of " << hours << " hours at $" << payrate << ""
                " dollars the hour which gives you a total of $"  << totlwge << " dollars. " << endl;
        cout << "But you worked " << ovetime << " hours thats overtime"
                " at a rate of  " << ovetimrte << " the hour  which gives you a"
                " total of " << totlamnt;
        cout << endl;
        cout << endl;
        
        //This calculates the social security tax
        sstax    = totlwge * sstaxrte;
        
        //This calculates the federal income tax
        fedlincm = totlwge * fedincmrte;
        
        //this calculates the state income tax
        statetx  = totlwge * statetxrte;
        
        
        cout << "But uncle sam takes off. " << endl;
        cout <<"$"<< sstax    <<  " For Social Security tax."  <<endl;
        cout <<"$"<< fedlincm <<  " For Federal income tax."   <<endl;
        cout <<"$"<< statetx  <<  " For State Income tax."     <<endl;
        cout <<"$"<< unondue  <<  " For union dues."           <<endl;
        cout <<"$"<< dpnttax  <<  " For health insurance";
        
        //This calculates the grand total of the workers wage with all the deductions
        cout << endl;
        grndttl = totlamnt-(sstax + fedlincm + statetx + unondue + dpnttax);
        cout << "Which gives you a grand total of " << grndttl;
    }
    
//Output the Results

//Exit Stage Right!
    return 0;
}

