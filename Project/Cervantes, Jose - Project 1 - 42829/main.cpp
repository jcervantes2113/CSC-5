/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: joseluiscervantes
 * Purpose: Jumble
 * Created on April 28, 2016, 9:32 AM
 */


// The * symbol is used to make the output nicer and easier to read. 


//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

// Declared functions
void level1();
void level2();
void plyrs2(string , string );


//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    

//Initialize Variables
    
//Input Values
    
    //Menu
    cout << "**************************************** \n";
    cout << "**              Welcome               ** \n"; 
    cout << "**                 To                 ** \n"; 
    cout << "**               JUMBLE               ** \n"; 
    cout << "**************************************** \n" << endl; 
    
    //Rules
    cout << "**************************************************************** \n"; 
    cout << "* RULES: This game asks he user to unscramble words            * \n";
    cout << "* From a range of difficulty. The first level is fairly easy,  * \n";
    cout << "* but as you progress in the game, JUMBLE, it gets pretty      * \n";
    cout << "* complicated.                                                 * \n";
    cout << "****************************************************************" << endl;
    // Robert ??????
    
    //Declared variables
    char players;
    
    unsigned short size(0), answer(0);
    //size = takes in the number of characters that player1 entered
    //answer = takes in the user input if they want to run the code again
    //players = takes in the user input for what mode they want
    
    
    bool repeat = true;
    //bool repeat = repeat is set to true which is 1.
    
    
    string word, hint;
    //word = For player 2 mode. Take the user inputs for the word they want 
    // player 2 to solve.
    
    //hint = hint is used by the user to receive a hint by typing in hint
    
 
// This do statement re-runs the whole game if the user wants do    
do{  
        //This do statement re-runs the menu for what option to enter if the player
        // enters a value that does not match the one given
        do {

                //inputs
                cout << "Please enter x for one player"  << endl;
                cout << "Please enter y for two players" << endl;
                cout << "answer: ";
                cin  >> players;
                
                cout << endl;
                        
                //If statement for player one is true
                if (players == 'x' || players == 'X'){

                        // For loop runs through every case for the main part of the game
                        for(int level =1; level <=2; level++) {

                            switch (level){
                                case 1 : level1(); break;
                                case 2 : level2(); break;
                                default: cout<< "exit"; break;
                                    
                            }// Switch statement bracket

                        } // The for loop Bracket
                
                //If statement for player two is true        
                }else if(players == 'y' || players == 'Y'){

                        cout << "You selected 2 players." << endl << endl;

                        cout << "Player one:" << endl;
                        cout << "Enter a word thats between the length of 4 and 8 characters"
                                " Without player 2 knowing the word: ";

                        //Inputs for the word and hint the user enters
                        cin.ignore();
                        getline (cin, word);
                        cout << "Please enter a hint: ";
                        cin.ignore();
                        getline (cin, hint);


                        //These spaces move the screen down so when player one enters a
                        //Word player two does not see what it is.
                        cout << endl << endl << endl << endl << endl 
                             << endl << endl << endl << endl << endl
                             << endl << endl << endl << endl << endl
                             << endl << endl << endl << endl << endl
                             << endl << endl << endl << endl << endl
                             << endl << endl << endl << endl << endl
                             << endl << endl << endl << endl << endl
                             << endl << endl << endl << endl << endl;


                        //Gets the size of the word and puts it through 
                        // the proper case depending on its length.
                        size = word.length(); 

                        //This if statement only takes in words lengths from 4 through 8
                        if (size <= 8 && size >=4){

                            switch(size){
                            case 4  : plyrs2(word, hint); break;
                            case 5  : plyrs2(word, hint); break;
                            case 6  : plyrs2(word, hint); break;
                            case 7  : plyrs2(word, hint); break;
                            case 8  : plyrs2(word, hint); break;
                            default: cout<< "exit"; break;
                            }//End of switch statement


                        }else{
                            cout << "You did not enter a word with 4 to 8 characters"
                                ", make sure there's no spaces or caps." << endl;
                    }


                // If the user fails to enter x or y
            }else{
               cout << "you did not enter x or y" << endl;

            }
        
        // This not 
        }while(!((players == 'y' || players == 'Y')|| (players == 'x' || players == 'X')));
        
    cout << endl;
    cout << "******Congratulations You solved the word.******" << endl << endl;
    
    // asks the user if they want to repeat the game  
    cout << "Please enter 1 to play this game again else type in 2 to quit: ";
    cin  >> answer;
    cout << endl;

// This do statement re-runs the whole game if the user wants do         
}while(repeat == answer);
     
//Map The Inputs to the Outputs
    
//Output the Results

    //The end

//Exit Stage Right!
    return 0;
}




//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** level1();  ***********************************
 *Inputs
 *      answer --->  inputs the word being guessed
 *Outputs
 * the menu
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890


void level1() {
    // Declared variables
    string answer, word1, hint;
    //
    //answer = takes in the user input if they want to run the code again
    //hint   = is a key word for the user if they need help
    //word1  = is the first word of the level
    
    unsigned short attempts(0);
    //
    //attempts(0) = keeps track of the number of attempts it takes the user to 
    // solve the word
    
    
    
    ofstream out; //Output file
    out.open("hello.txt",ios::app); // the file typ is .txt
    
    
    //Declared Variables
        //first level word they need to solve
        word1 = "house";

    
 
    // Menu of level 1
    cout << "***************************************** \n";
    cout << "**              Level 1                ** \n"; 
    cout << "**                                     ** \n"; 
    cout << "**   Each word in level 1 consist of   ** \n"; 
    cout << "**  of four words.  As each level      ** \n"; 
    cout << "** Progresses the word gets difficult. ** \n";
    cout << "**                                     ** \n"; 
    cout << "** (MAKE SURE YOUR CAP LOCKS IS OFF )  ** \n"; 
    cout << "**   (ENTER LOWER CASE LETTERS ONLY)   ** \n"; 
    cout << "***************************************** \n" << endl;
    
///*************************************************** Word one **********************************************************
    // Tells the user what word and level they are on
    cout << "************ \n";
    cout << "* LEVEL 1  * \n";
    cout << "* WORD ONE * \n";
    cout << "************ \n";
    
    
    cout << "***********************************************************" << endl;
    cout << "* Type in (hint) with no caps or spaces to give you a     *" << endl;
    cout << "* clue on what the word is.                               *" << endl;
    cout << "***********************************************************" << endl;
    
    // This do while loop re-runs the code whenever the user enters the wrong word
    // and stops until the user enters the right word
    do {
    
            // Tells the user what to enter, displays a hint, and outputs the word they 
            // need to unscramble
            cout << "***********************************************************"<< endl;
            cout << "* Unscramble: || eusho ||                                 *" << endl;
            cout << "* answer: ";
            cin  >> answer;
            
            
               // Displays the hint to the user
               if (answer == "hint"){
                cout << "***********************************************************" << endl; 
                cout << "* HINT: I am something you live in.                       *" << endl;
                cout << "***********************************************************" << endl; 
                cout << "* Make sure your caps lock is off and                     *" << endl;
                cout << "* everything you enter is in lower case with no spaces.   *" << endl;
                
               //If the user enters an answer that doesn't match word1 then this will display  
               }else if (!(answer == word1)){
                cout << "***********************************************************" << endl; 
                cout << "* TRY AGAIN."<<setw(47)<<"*" << endl;
           }// else if bracket

            
           if ((!(answer == word1))) {
           cout << "*********************************************************** " << endl;
           cout << endl << endl;
           } 
            
    attempts++;
    
    }while (!(answer == word1)); // If the answer entered is false then the ! 
                                 // operator returns the value true and runs 
                                 // the program again
    
    //Displays the number of attempts the user needed to solve the word
    cout << "It took you " << attempts << " attempts to unscramble the word." << word1 << endl;

    
    out << endl << endl << "New Game" << endl;
    out << "LEVEL 1 Word 1" << endl;
    out << "It took you " << attempts << " attempts to solve the word " << word1 << endl << endl; 
    
    cout << "*********************************************************** " << endl;
    cout << "* CORRECT!!!!!                                            * " << endl;
    cout << "*********************************************************** " << endl;
    cout << endl << endl << endl;
    
//**************************************** Word Two ***********************************************************************
    
    // Tells the user what word and level they are on
    cout << "************ \n";
    cout << "* LEVEL 1  * \n";
    cout << "* WORD TWO * \n";
    cout << "************ \n";
    
    
    // Declared Variables
    string word2;
    
    word2 = "pizza";
    
    attempts = 0;
    
    //Menu
    cout << "***********************************************************" << endl;
    cout << "* Type in (hint) with no caps or spaces to give you a     *" << endl;
    cout << "* clue on what the word is.                               *" << endl;
    cout << "***********************************************************" << endl;
    
    // This do while loop re-runs the code whenever the user enters the wrong word
    // and stops until the user enters the right word
    do {

                // Tells the user what to enter, displays a hint, and outputs the word they 
                // need to unscramble
                cout << "***********************************************************" << endl;
                cout << "* Unscramble: || zizpa ||                                 *" << endl;
                cout << "* answer: ";
                cin  >> answer;


                    // Displays the hint to the user
                   if (answer == "hint"){
                    cout << "***********************************************************" << endl; 
                    cout << "* HINT: I am sold at papa johns                           *" << endl;
                    cout << "***********************************************************" << endl; 
                    cout << "* Make sure your caps lock is off and                     *" << endl;
                    cout << "* everything you enter is in lower case with no spaces.   *" << endl;

                   //If the user enters an answer that doesn't match word1 then this will display  
                   }else if (!(answer == word2)){
                    cout << "***********************************************************" << endl; 
                    cout << "* TRY AGAIN."<<setw(47)<<"*" << endl;
                   }// else if bracket


               if ((!(answer == word2))) {
               cout << "*********************************************************** " << endl;
               cout << endl << endl;
               } 

        attempts = attempts + 1;
    
    }while (!(answer == word2)); // If the answer entered is false then the ! 
                                 // operator returns the value true and runs 
                                 // the program again
    
    //Displays the number of attempts the user needed to solve the word
    cout << "It took you " << attempts << " attempts to unscramble the word." << word2 << endl;
    
    out << "LEVEL 1 Word 2" << endl;
    out << "It took you " << attempts << " attempts to solve the word " << word2 << endl << endl; 

    cout << "*********************************************************** " << endl;
    cout << "* CORRECT!!!!!                                            * " << endl;
    cout << "*********************************************************** " << endl;
    cout << endl << endl << endl;
             
}// end of function bracket




//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** level2();  ***********************************
 *Inputs
 *      answer --->  inputs the word being guessed
 *Outputs
 * the menu
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890


void level2() {
    
    // Menu of level 1
    cout << "******************************************* \n";
    cout << "**              Level 2                  ** \n"; 
    cout << "**                                       ** \n"; 
    cout << "**   Each word in level 2 consist of     ** \n"; 
    cout << "**  of six to ten words. As each level **  \n"; 
    cout << "** Progresses the word gets difficult.   ** \n";
    cout << "**                                       ** \n"; 
    cout << "** (MAKE SURE YOUR CAP LOCKS IS OFF )    ** \n"; 
    cout << "**   (ENTER LOWER CASE LETTERS ONLY)     ** \n"; 
    cout << "******************************************* \n" << endl;
    

    
    
///*************************************************** Word one **********************************************************
    // Tells the user what word and level they are on
    cout << "************ \n";
    cout << "* LEVEL 2  * \n";
    cout << "* WORD ONE * \n";
    cout << "************ \n";
    
    // Declared variables
    string answer, word1, hint;
    //answer = takes in the user input if they want to run the code again
    //hint   = is a key word for the user if they need help
    //word1  = is the first word of the level
    
    unsigned short attempts(0);
    
    ofstream out;//Output file
    out.open("hello.txt",ios::app);
    
    
    
    //Declared Variables
    word1 = "double";

    cout << "***********************************************************" << endl;
    cout << "* Type in (hint) with no caps or spaces to give you a     *" << endl;
    cout << "* clue on what the word is.                               *" << endl;
    cout << "***********************************************************" << endl;
    
    // This do while loop re-runs the code whenever the user enters the wrong word
    // and stops until the user enters the right word
    do {

                // Tells the user what to enter, displays a hint, and outputs the word they 
                // need to unscramble
                cout << "***********************************************************" << endl;
                cout << "* Unscramble: || eubdlo ||                                *" << endl;
                cout << "* answer: ";
                cin  >> answer;


                    // Displays the hint to the user
                   if (answer == "hint"){
                    cout << "***********************************************************" << endl; 
                    cout << "* HINT: This is how you get an F in CSC 5                 *" << endl;
                    cout << "***********************************************************" << endl; 
                    cout << "* Make sure your caps lock is off and                     *" << endl;
                    cout << "* everything you enter is in lower case with no spaces.   *" << endl;

                   //If the user enters an answer that doesn't match word1 then this will display  
                   }else if (!(answer == word1)){
                    cout << "***********************************************************" << endl; 
                    cout << "* TRY AGAIN."<<setw(47)<<"*" << endl;
                   }// else if bracket


               if ((!(answer == word1))) {
               cout << "*********************************************************** " << endl;
               cout << endl << endl;
               } 

        attempts++;
    
    }while (!(answer == word1)); // If the answer entered is false then the ! 
                                 // operator returns the value true and runs 
                                 // the program again
    
    //Displays the number of attempts the user needed to solve the word
    cout << "It took you " << attempts << " attempts to unscramble the word." << word1 << endl;
    
    out << "LEVEL 2 Word 1" << endl;
    out << "It took you " << attempts << " attempts to solve the word " << word1 << endl << endl;  
    cout << "*********************************************************** " << endl;
    cout << "* CORRECT!!!!!                                            * " << endl;
    cout << "*********************************************************** " << endl;
    cout << endl << endl << endl;
    
//**************************************** Word Two ***********************************************************************
    
    // Tells the user what word and level they are on
    cout << "************ \n";
    cout << "* LEVEL 2  * \n";
    cout << "* WORD TWO * \n";
    cout << "************ \n";
    
    
    // Declared Variables
    string word2;
    attempts = 0;
    word2 = "plagiarism";
    
    cout << "***********************************************************" << endl;
    cout << "* Type in (hint) with no caps or spaces to give you a     *" << endl;
    cout << "* clue on what the word is.                               *" << endl;
    cout << "***********************************************************" << endl;
    
    // This do while loop re-runs the code whenever the user enters the wrong word
    // and stops until the user enters the right word
    do {
    
                // Tells the user what to enter, displays a hint, and outputs the word they 
                // need to unscramble
                cout << "***********************************************************" << endl;
                cout << "* Unscramble: || laipairmsg ||                            *" << endl;
                cout << "* answer: ";
                cin  >> answer;


                   // Displays the hint to the user
                   if (answer == "hint"){
                    cout << "***********************************************************" << endl; 
                    cout << "* HINT: It's illegal to do this and you can get an F      *" << endl;
                    cout << "***********************************************************" << endl; 
                    cout << "* Make sure your caps lock is off and                     *" << endl;
                    cout << "* everything you enter is in lower case with no spaces.   *" << endl;

                    //If the user enters an answer that doesn't match word1 then this will display 
                   }else if (!(answer == word2)){
                    cout << "***********************************************************" << endl; 
                    cout << "* TRY AGAIN.                                              *" << endl;
                   }// else if bracket


               if ((!(answer == word2))) {
               cout << "*********************************************************** " << endl;
               cout << endl << endl;
               } 
                
        attempts++;
    
    }while (!(answer == word2)); // If the answer entered is false then the ! 
                                 // operator returns the value true and runs 
                                 // the program again
    
    //Displays the number of attempts the user needed to solve the word
    cout << "It took you " << attempts << " attempts to unscramble the word." << word2 << endl;
    
    out << "LEVEL 2 Word 1" << endl;
    out << "It took you " << attempts << " attempts to solve the word " << word2 << endl << endl;
    out << "END OF GAME" << endl << endl;
    
    
    cout << "*********************************************************** " << endl;
    cout << "* CORRECT!!!!!                                            * " << endl;
    cout << "*********************************************************** " << endl;
    cout << endl << endl << endl;
             
}// end of function bracket




//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** twoplyrs();  ***********************************
 *Inputs
 *      answer --->  inputs the word being guessed
 *Outputs
 * the menu
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890


void plyrs2(string word, string hint) {
    
    ofstream out;//Output file
     
    out.open("hello.txt",ios::app);
    
    
    string answer;
    unsigned short size(0), attempts(0);
    
    cout << "Player 2:" << endl;
    
    
    
    size = word.length();
    
    cout << "***********************************************************" << endl;
    cout << "* Type in (hint) with no caps or spaces to give you a     *" << endl;
    cout << "* clue on what the word is.                               *" << endl;
    cout << "***********************************************************" << endl;  
    if (size == 4){
        
        //This do loop will keep running until the user has guessed player one's word
        do {

               // Tells the user what to enter, displays a hint, and outputs the word they 
               // need to unscramble
               cout << "***********************************************************" << endl;
               cout << "* Unscramble: || ";
               
               // Word.at() scrambles the whole word and out puts it
               cout << word.at(2) << word.at(1) << word.at(3) << word.at(0)
                 << " ||                                *" << endl;

               cout << "* answer: ";
               cin  >> answer;


               // Displays the hint to the user
               if (answer == "hint"){
                cout << "***********************************************************" << endl; 
                cout << "* HINT: " << hint << endl;
                cout << "***********************************************************" << endl; 
                cout << "* Make sure your caps lock is off and                     *" << endl;
                cout << "* everything you enter is in lower case with no spaces.   *" << endl;
                
                //If the user enters an answer that doesn't match word then this will display 
               }else if (!(answer == word)){
                cout << "***********************************************************" << endl; 
                cout << "* TRY AGAIN."<<setw(47)<<"*" << endl;
               }// else if bracket


               if ((!(answer == word))) {
               cout << "*********************************************************** " << endl;
               cout << endl << endl;
               } 
               
               attempts++; // Keep track of the number of attempts
               
        }while (!(answer == word)); // If the answer entered is false then the ! 
                                    // operator returns the value true and runs 
                                    // the program again
    
    
    //Displays the number of attempts the user needed to solve the word
    cout << "It took you " << attempts << " attempts to unscramble the word." << word << endl;
    
    // Out put to file score.txt
    out << endl << endl << "New Game" << endl;
    out << "2 Player mode" << endl;
    out << "It took you " << attempts << " attempts to solve the word " << word << endl << endl;
    out << "END OF GAME" << endl << endl;
    
    }else if(size == 5){
        
        //This do loop will keep running until the user has guessed player one's word
        do {

               // Tells the user what to enter, displays a hint, and outputs the word they 
               // need to unscramble
               cout << "***********************************************************" << endl;
               cout << "* Unscramble: || ";
               
               // Word.at() scrambles the whole word and out puts it
               cout << word.at(2) << word.at(0) << word.at(1) << word.at(4) << word.at(3)
                    << " ||                                *" << endl;

               cout << "* answer: ";
               cin  >> answer;


               // Displays the hint to the user
                if (answer == "hint"){
               cout << "***********************************************************" << endl; 
               cout << "* HINT: " << hint << endl;
               cout << "***********************************************************" << endl; 
               cout << "* Make sure your caps lock is off and                     *" << endl;
               cout << "* everything you enter is in lower case with no spaces.   *" << endl;

               }else if (!(answer == word)){
                cout << "***********************************************************" << endl; 
                cout << "* TRY AGAIN."<<setw(47)<<"*" << endl;
               }// else if bracket


               if ((!(answer == word))) {
               cout << "*********************************************************** " << endl;
               cout << endl << endl;
               } 
            attempts++; // Keep track of the number of attempts 
            
        }while (!(answer == word));// If the answer entered is false then the ! 
                                   // operator returns the value true and runs 
                                   // the program again
    
    
    //Displays the number of attempts the user needed to solve the word
    cout << "It took you " << attempts << " attempts to unscramble the word." << word << endl;
    
     // Out put to file score.txt
    out << endl << endl << "New Game" << endl;
    out << "2 Player mode" << endl;
    out << "It took you " << attempts << " attempts to solve the word " << word << endl << endl;
    out << "END OF GAME" << endl << endl;
        
        
    }else if(size == 6){
        
        //This do loop will keep running until the user has guessed player one's word
        do {
               // Tells the user what to enter, displays a hint, and outputs the word they 
               // need to unscramble
               cout << "***********************************************************" << endl;
               cout << "* Unscramble: || ";
               
               // Word.at() scrambles the whole word
               cout << word.at(5) << word.at(3) << word.at(1) << word.at(0) << word.at(4) << word.at(2)
                    << " ||                                *" << endl;

               cout << "* answer: ";
               cin  >> answer;


               // Displays the hint to the user
               if (answer == "hint"){
                cout << "***********************************************************" << endl; 
                cout << "* HINT: " << hint << endl;
                cout << "***********************************************************" << endl; 
                cout << "* Make sure your caps lock is off and                     *" << endl;
                cout << "* everything you enter is in lower case with no spaces.   *" << endl;
                
                //If the user enters an answer that doesn't match word then this will display 
               }else if (!(answer == word)){
                cout << "***********************************************************" << endl; 
                cout << "* TRY AGAIN."<<setw(47)<<"*" << endl;
               }// else if bracket


               if ((!(answer == word))) {
               cout << "*********************************************************** " << endl;
               cout << endl << endl;
               } 
               
            attempts++; // Keep track of the number of attempts
            
        }while (!(answer == word)); // If the answer entered is false then the ! 
                                    // operator returns the value true and runs 
                                    // the program again
    
    
    //Displays the number of attempts the user needed to solve the word    
    cout << "It took you " << attempts << " attempts to unscramble the word." << word << endl;
    
     // Out put to file score.txt
    out << endl << endl << "New Game" << endl;
    out << "2 Player mode" << endl;
    out << "It took you " << attempts << " attempts to solve the word " << word << endl << endl;
    out << "END OF GAME" << endl << endl;
    
    }else if(size == 7){
        
        //This do loop will keep running until the user has guessed player one's word
        do {
               // Tells the user what to enter, displays a hint, and outputs the word they 
               // need to unscramble
               cout << "***********************************************************" << endl;
               cout << "* Unscramble: || ";
               
               // Word.at() scrambles the whole word and out puts it
               cout << word.at(4) << word.at(3) << word.at(1) << word.at(6)
                    << word.at(2) << word.at(0) << word.at(5)
                    << " ||                                *" << endl;
               
               cout << "* answer: ";
               cin  >> answer;


               // Displays the hint to the user
               if (answer == "hint"){
                cout << "***********************************************************" << endl; 
                cout << "* HINT: " << hint << endl;
                cout << "***********************************************************" << endl; 
                cout << "* Make sure your caps lock is off and                     *" << endl;
                cout << "* everything you enter is in lower case with no spaces.   *" << endl;

               }else if (!(answer == word)){
                cout << "***********************************************************" << endl; 
                cout << "* TRY AGAIN."<<setw(47)<<"*" << endl;
               }// else if bracket

               if ((!(answer == word))) {
               cout << "*********************************************************** " << endl;
               cout << endl << endl;               
               } 
               
            attempts++; // Keep track of the number of attempts
            
        }while (!(answer == word)); // If the answer entered is false then the ! 
                                    // operator returns the value true and runs 
                                    // the program again
    
    //Displays the number of attempts the user needed to solve the word
    cout << "It took you " << attempts << " attempts to unscramble the word." << word << endl;
    
     // Out put to file score.txt
    out << endl << endl << "New Game" << endl;
    out << "2 Player mode" << endl;
    out << "It took you " << attempts << " attempts to solve the word " << word << endl << endl;
    out << "END OF GAME" << endl << endl;
    
    }else if(size == 8){
        
        //This do loop will keep running until the user has guessed player one's word     
        do {
                // Tells the user what to enter, displays a hint, and outputs the word they 
                // need to unscramble
                cout << "***********************************************************" << endl;
                cout << "* Unscramble: || ";
                
                // Word.at() scrambles the whole word and out puts it
                cout << word.at(5) << word.at(3) << word.at(2) << word.at(0) << word.at(7)
                     << word.at(6) << word.at(4) << word.at(1)
                     << " ||                                *" << endl;

                cout << "* answer: ";
                cin  >> answer;

                // Displays the hint to the user
               if (answer == "hint"){
                cout << "***********************************************************" << endl; 
                cout << "* HINT: " << hint << endl;
                cout << "***********************************************************" << endl; 
                cout << "* Make sure your caps lock is off and                     *" << endl;
                cout << "* everything you enter is in lower case with no spaces.   *" << endl;
                
                //If the user enters an answer that doesn't match word then this will display 
               }else if (!(answer == word)){
                cout << "***********************************************************" << endl; 
                cout << "* TRY AGAIN."<<setw(47)<<"*" << endl;
               }// else if bracket


               if ((!(answer == word))) {
               cout << "*********************************************************** " << endl;
               cout << endl << endl;
               }
                
            attempts++; // Keep track of the number of attempts
            
        }while (!(answer == word)); // If the answer entered is false then the ! 
                                    // operator returns the value true and runs 
                                    // the program again
    
    //Displays the number of attempts the user needed to solve the word
    cout << "It took you " << attempts << " attempts to unscramble the word." << word << endl;
    
     // Out put to file score.txt
    out << endl << endl << "New Game" << endl;
    out << "2 Player mode" << endl;
    out << "It took you " << attempts << " attempts to solve the word " << word << endl << endl;
    out << "END OF GAME" << endl << endl;
    
    }// end of else if(size == 8) statement        

}// end of function