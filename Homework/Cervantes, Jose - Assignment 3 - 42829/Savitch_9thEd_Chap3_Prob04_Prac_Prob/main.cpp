/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: tell someone their horoscope
 * Created on March 28, 2016, 10:47 AM
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
            cout << "Your Horoscope is Aquarius." << endl;
            cout << "Your element is AIR and you are most compatible with"
                    " (Gemini, Libra, Aquarius).";
            cout << endl;
            cout << endl;
        
        }else if (month == 1 && day >=1 && day <=19){
            cout << "Your Horoscope is Capricorn." << endl;
            cout << "Your element is Earth and you are most compatibale with"
                    " (Taurus, Virgo, Capricorn).";
            cout << endl;
            cout << endl;
        
        }else if (month == 2 && day >=1 && day <=18){
            cout << "Your Horoscope is Aquarius." << endl;
            cout << "Your element is AIR and you are most compatible with"
                    " (Gemini, Libra, Aquarius).";
            cout << endl;
            cout << endl;
        
        }else if (month == 2 && day >=19 && day <=31){
            cout << "Your Horoscope is Pisces." << endl;
            cout << "Your element is Water and you are most compatibale with"
                    " (Cancer, Scorpio, Pisces).";
            cout << endl;
            cout << endl;
        
        }else if (month == 3 && day >=1 && day <=20){
            cout << "Your Horoscope is Pisces." << endl;
            cout << "Your element is Water and you are most compatibale with"
                    " (Cancer, Scorpio, Pisces).";
            cout << endl;
            cout << endl;
        
        }else if (month == 3 && day >=21 && day <=31){
            cout << "Your Horoscope is Aries." << endl;
            cout << "Your element is Fire and you are most compatibale with"
                    " (Aries, Leo, Sagittarius).";
            cout << endl;
            cout << endl;
        
        }else if (month == 4 && day >=1 && day <=19){
            cout << "Your Horoscope is Aries." << endl;
            cout << "Your element is Fire and you are most compatibale with"
                    " (Aries, Leo, Sagittarius).";
            cout << endl;
            cout << endl;
        
        }else if (month == 4 && day >=20 && day <=31){
            cout << "Your Horoscope is Taurus." << endl;
            cout << "Your element is Earth and you are most compatibale with"
                    " (Taurus, Virgo, Capricorn).";
            cout << endl;
            cout << endl;
        
        }else if (month == 5 && day >=1 && day <=20){
            cout << "Your Horoscope is Taurus." << endl;
            cout << "Your element is Earth and you are most compatibale with"
                    " (Taurus, Virgo, Capricorn).";
            cout << endl;
            cout << endl;
        
        }else if (month == 5 && day >=21 && day <=31){
            cout << "Your Horoscope is Gemini." << endl;
            cout << "Your element is AIR and you are most compatibale with"
                    " (Gemini, Libra, Aquarius).";
            cout << endl;
            cout << endl;
        
        }else if (month == 6 && day >=1 && day <=21){
            cout << "Your Horoscope is Gemini." << endl;
            cout << "Your element is AIR and you are most compatibale with"
                    " (Gemini, Libra, Aquarius).";
            cout << endl;
            cout << endl;
        
        }else if (month == 6 && day >=22 && day <=31){
            cout << "Your Horoscope is Cancer." << endl;
            cout << "Your element is Water and you are most compatibale with"
                    " (Cancer, Scorpio, Pisces).";
            cout << endl;
            cout << endl;
        
        }else if (month == 7 && day >=1 && day <=22){
            cout << "Your Horoscope is Cancer." << endl;
            cout << "Your element is Water and you are most compatibale with"
                    " (Cancer, Scorpio, Pisces).";
            cout << endl;
            cout << endl;
        
        }else if (month == 7 && day >=23 && day <=31){
            cout << "Your Horoscope is Leo." << endl;
            cout << "Your element is Fire and you are most compatibale with"
                    " (Aries, Leo, Sagittarius).";
            cout << endl;
            cout << endl;
        
        }else if (month == 8 && day >=1 && day <=22){
            cout << "Your Horoscope is Leo.";
            cout << endl;
            cout << endl;
            cout << "Your element is Fire and you are most compatibale with"
                    " (Aries, Leo, Sagittarius).";
            cout << endl;
            cout << endl;
        
        }else if (month == 8 && day >=23 && day <=31){
            cout << "Your Horoscope is Virgo." << endl;
            cout << "Your element is Earth and you are most compatibale with"
                    " (Taurus, Virgo, Capricorn).";
            cout << endl;
            cout << endl;
        
        }else if (month == 9 && day >=1 && day <=22){
            cout << "Your Horoscope is Virgo." << endl;
            cout << "Your element is Earth and you are most compatibale with"
                    " (Taurus, Virgo, Capricorn).";
            cout << endl;
            cout << endl;
        
        }else if (month == 9 && day >=23 && day <=31){
            cout << "Your Horoscope is Libra." << endl;
            cout << "Your element is AIR and you are most compatibale with"
                    " (Gemini, Libra, Aquarius).";
            cout << endl;
            cout << endl;
        
        }else if (month == 10 && day >=1 && day <=22){
            cout << "Your Horoscope is Libra." << endl;
            cout << "Your element is AIR and you are most compatibale with"
                    " (Gemini, Libra, Aquarius).";
            cout << endl;
            cout << endl;
        
        }else if (month == 10 && day >=23 && day <=31){
            cout << "Your Horoscope is Scorpio." << endl;
            cout << "Your element is Water and you are most compatibale with"
                    " (Cancer, Scorpio, Pisces).";
            cout << endl;
            cout << endl;
        
        }else if (month == 11 && day >=1 && day <=21){
            cout << "Your Horoscope is Scorpio." << endl;
            cout << "Your element is Water and you are most compatibale with"
                    " (Cancer, Scorpio, Pisces).";
            cout << endl;
            cout << endl;
        
        }else if (month == 11 && day >=22 && day <=31){
            cout << "Your Horoscope is Sagittarius." << endl;
            cout << "Your element is Fire and you are most compatibale with"
                    " (Aries, Leo, Sagittarius).";
            cout << endl;
            cout << endl;
        
        }else if (month == 12 && day >=1 && day <=21){
            cout << "Your Horoscope is Sagittarius." << endl;
            cout << "Your element is Fire and you are most compatibale with"
                    " (Aries, Leo, Sagittarius).";
            cout << endl;
            cout << endl;
        
        }else if (month == 12 && day >=22 && day <=31){
            cout << "Your Horoscope is Capricorn." << endl;
            cout << "Your element is Earth and you are most compatibale with"
                    " (Taurus, Virgo, Capricorn).";
            cout << endl;
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

