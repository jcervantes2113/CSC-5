/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose tell you your Horoscope
 * Created on March 28, 2016, 10:06 AM
 */

//User Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    int month, day;
    char ans;

//Initialize Variables

//Input Values 
    
    
//Map The Inputs to the Outputs
    cout << "This Program tells you your Horoscope" << endl;
    cout << endl;
    
    do {
        cout << "Please enter your birthday month using 1-12. (Ex. May = 5.): "; 
        cin  >> month;      
        cout << "Please enter the day you were born: ";
        cin  >> day;
        if       (month == 1 && day >=20 && day <=31){
            cout << "Your Horoscope is Aquarius.";
            cout << endl;
        
        }else if (month == 1 && day >=1 && day <=19){
            cout << "Your Horoscope is Capricorn.";
            cout << endl;
        
        }else if (month == 2 && day >=1 && day <=18){
            cout << "Your Horoscope is Aquarius.";
            cout << endl;
        
        }else if (month == 2 && day >=19 && day <=31){
            cout << "Your Horoscope is Pisces.";
            cout << endl;
        
        }else if (month == 3 && day >=1 && day <=20){
            cout << "Your Horoscope is Pisces.";
            cout << endl;
        
        }else if (month == 3 && day >=21 && day <=31){
            cout << "Your Horoscope is Aries.";
            cout << endl;
        
        }else if (month == 4 && day >=1 && day <=19){
            cout << "Your Horoscope is Aries.";
            cout << endl;
        
        }else if (month == 4 && day >=20 && day <=31){
            cout << "Your Horoscope is Taurus.";
            cout << endl;
        
        }else if (month == 5 && day >=1 && day <=20){
            cout << "Your Horoscope is Taurus.";
            cout << endl;
        
        }else if (month == 5 && day >=21 && day <=31){
            cout << "Your Horoscope is Gemini.";
            cout << endl;
        
        }else if (month == 6 && day >=1 && day <=21){
            cout << "Your Horoscope is Gemini.";
            cout << endl;
        
        }else if (month == 6 && day >=22 && day <=31){
            cout << "Your Horoscope is Cancer.";
            cout << endl;
        
        }else if (month == 7 && day >=1 && day <=22){
            cout << "Your Horoscope is Cancer.";
            cout << endl;
        
        }else if (month == 7 && day >=23 && day <=31){
            cout << "Your Horoscope is Leo.";
            cout << endl;
        
        }else if (month == 8 && day >=1 && day <=22){
            cout << "Your Horoscope is Leo.";
            cout << endl;
        
        }else if (month == 8 && day >=23 && day <=31){
            cout << "Your Horoscope is Virgo.";
            cout << endl;
        
        }else if (month == 9 && day >=1 && day <=22){
            cout << "Your Horoscope is Virgo.";
            cout << endl;
        
        }else if (month == 9 && day >=23 && day <=31){
            cout << "Your Horoscope is Libra.";
            cout << endl;
        
        }else if (month == 10 && day >=1 && day <=22){
            cout << "Your Horoscope is Libra.";
            cout << endl;
        
        }else if (month == 10 && day >=23 && day <=31){
            cout << "Your Horoscope is Scorpio.";
            cout << endl;
        
        }else if (month == 11 && day >=1 && day <=21){
            cout << "Your Horoscope is Scorpio.";
            cout << endl;
        
        }else if (month == 11 && day >=22 && day <=31){
            cout << "Your Horoscope is Sagittarius.";
            cout << endl;
        
        }else if (month == 12 && day >=1 && day <=21){
            cout << "Your Horoscope is Sagittarius.";
            cout << endl;
        
        }else if (month == 12 && day >=22 && day <=31){
            cout << "Your Horoscope is Capricorn.";
            cout << endl;
        
        }else {
            cout << "Thats not a day or month!!!";
            cout << endl;
        }
        
        cout << "Enter Y if you would like to run this program again and N to stop:";
        cin  >> ans;
    }while(ans == 'Y' || ans == 'y');
    cout << "Exit";
    
//Output the Results

//Exit Stage Right!
    return 0;
}

