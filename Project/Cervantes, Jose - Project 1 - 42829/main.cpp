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

#include <iostream>
#include <string>

using namespace std;

void level1();
void level2();
void plyrs2(string word, string hint);


//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declared Variables
    

//Initialize Variables
    
//Input Values 
    //Menu
    cout << "**************************************** \n";
    cout << "**              Welcome               ** \n"; 
    cout << "**                 To                 ** \n"; 
    cout << "**               JUMBLE               ** \n"; 
    cout << "**************************************** \n" << endl; 
    
    cout << "**************************************************************** \n"; 
    cout << "* RULES: This game asks he user to unscramble words            * \n";
    cout << "* From a range of difficulty. The first level is fairly easy,  * \n";
    cout << "* but as you progress in the game, JUMBLE, it gets pretty      * \n";
    cout << "* complicated.                                                 * \n";
    cout << "****************************************************************" << endl;
    
    
    //Declared variables
    int players(0), level = 1;
    string word, hint;
    unsigned short size, answer;
    bool repeat = true;
    
    
    
    
do{  
        do {

                //inputs
                cout << "Please enter 1 for one player"  << endl;
                cout << "Please enter 2 for two players" << endl;
                cout << "answer: ";

                cin >> players;


                if (players == 1){

                        for(int level =1; level <=2; level++) {



                            switch (level){
                                case 1 : level1(); break;
                                case 2 : level2(); break;


                            }// Switch statement bracket

                        } // The for loop Bracket

                }else if(players == 2){

                    cout << "You selected 2 players." << endl << endl;
                    cout << "Player one:" << endl;
                    cout << "Enter a word thats between the length of 4 and 8 characters"
                            " Without player 2 knowing the word: ";
                    //I used cin.ignore();
                    cin.ignore();
                    getline (cin, word);

                    cout << "Please enter a hint: ";
                    cin.ignore();
                    getline (cin, hint);
                    //cin.ignore();

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

                    if (size <= 10 && size >=4){

                        switch(size){
                        case 4  : plyrs2(word, hint); break;
                        case 5  : plyrs2(word, hint); break;
                        case 6  : plyrs2(word, hint); break;
                        case 7  : plyrs2(word, hint); break;
                        case 8  : plyrs2(word, hint); break;
                        case 9  : plyrs2(word, hint); break;
                        case 10 : plyrs2(word, hint); break;

                        }//End of switch statement
                    }else{
                        cout << "You did not enter a word with 4 to 10 characters"
                                " and make sure there's no spaces or caps." << endl;
                    }



                }else{
                    cout << "you did not enter 1 or 2" << endl;

                }


        }while(!(players == 1 || players ==2));
    cout << endl;
    cout << "******Congratulations You solved the word.******" << endl << endl;
        
        cout << "Please enter 1 to play this game again else type in 2 to quit: ";
        cin  >> answer;
        cout << endl;
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
    unsigned short random(0);
    
    
    
    //Declared Variables
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
            
            

               if (answer == "hint"){
                cout << "***********************************************************" << endl; 
                cout << "* HINT: I am something you live in.                       *" << endl;
                cout << "***********************************************************" << endl; 
                cout << "* Make sure your caps lock is off and                     *" << endl;
                cout << "* everything you enter is in lower case with no spaces.   *" << endl;

               }else if (!(answer == word1)){
                cout << "***********************************************************" << endl; 
                cout << "* TRY AGAIN.                                              *" << endl;
           }// else if bracket

            
           if ((!(answer == word1))) {
           cout << "*********************************************************** " << endl;
           cout << endl << endl;
           } 
    
    }while (!(answer == word1)); // If the answer enterd is false then the ! 
                                 // operator returns the value true and runs 
                                 // the program again
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
            
            

               if (answer == "hint"){
                cout << "***********************************************************" << endl; 
                cout << "* HINT: I am sold at papa johns                           *" << endl;
                cout << "***********************************************************" << endl; 
                cout << "* Make sure your caps lock is off and                     *" << endl;
                cout << "* everything you enter is in lower case with no spaces.   *" << endl;
                 
               }else if (!(answer == word2)){
                cout << "***********************************************************" << endl; 
                cout << "* TRY AGAIN.                                              *" << endl;
               }// else if bracket

            
           if ((!(answer == word2))) {
           cout << "*********************************************************** " << endl;
           cout << endl << endl;
           } 
    
    }while (!(answer == word2)); // If the answer enterd is false then the ! 
                                 // operator returns the value true and runs 
                                 // the program again
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
    unsigned short random;
    
    
    
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
            
            

               if (answer == "hint"){
                cout << "***********************************************************" << endl; 
                cout << "* HINT: This is how you get an F in CSC 5                 *" << endl;
                cout << "***********************************************************" << endl; 
                cout << "* Make sure your caps lock is off and                     *" << endl;
                cout << "* everything you enter is in lower case with no spaces.   *" << endl;
                 
               }else if (!(answer == word1)){
                cout << "***********************************************************" << endl; 
                cout << "* TRY AGAIN.                                              *" << endl;
               }// else if bracket

            
           if ((!(answer == word1))) {
           cout << "*********************************************************** " << endl;
           cout << endl << endl;
           } 
    
    }while (!(answer == word1)); // If the answer enterd is false then the ! 
                                 // operator returns the value true and runs 
                                 // the program again
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
            
            

               if (answer == "hint"){
                cout << "***********************************************************" << endl; 
                cout << "* HINT: It's illegal to do this and you can get an F      *" << endl;
                cout << "***********************************************************" << endl; 
                cout << "* Make sure your caps lock is off and                     *" << endl;
                cout << "* everything you enter is in lower case with no spaces.   *" << endl;
                 
               }else if (!(answer == word2)){
                cout << "***********************************************************" << endl; 
                cout << "* TRY AGAIN.                                              *" << endl;
               }// else if bracket

            
           if ((!(answer == word2))) {
           cout << "*********************************************************** " << endl;
           cout << endl << endl;
           } 
    
    }while (!(answer == word2)); // If the answer enterd is false then the ! 
                                 // operator returns the value true and runs 
                                 // the program again
    cout << "*********************************************************** " << endl;
    cout << "* CORRECT!!!!!                                            * " << endl;
    cout << "*********************************************************** " << endl;
    cout << endl << endl << endl;
             
}// end of function bracket




//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** plyrs2();  ***********************************
 *Inputs
 *      answer --->  inputs the word being guessed
 *Outputs
 * the menu
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890


void plyrs2(string word, string hint) {
    
    string answer;
    unsigned short size(0);
    cout << "Player 2:" << endl;
    
    
    
    size = word.length();
    
    cout << "***********************************************************" << endl;
    cout << "* Type in (hint) with no caps or spaces to give you a     *" << endl;
    cout << "* clue on what the word is.                               *" << endl;
    cout << "***********************************************************" << endl;  
    if (size == 4){
        do {

               // Tells the user what to enter, displays a hint, and outputs the word they 
               // need to unscramble
               cout << "***********************************************************" << endl;
               cout << "* Unscramble: || ";
               cout << word.at(2) << word.at(1) << word.at(3) << word.at(0)
                 << " ||                                *" << endl;

               cout << "* answer: ";
               cin  >> answer;



               if (answer == "hint"){
                cout << "***********************************************************" << endl; 
                cout << "* HINT: " << hint << endl;
                cout << "***********************************************************" << endl; 
                cout << "* Make sure your caps lock is off and                     *" << endl;
                cout << "* everything you enter is in lower case with no spaces.   *" << endl;

               }else if (!(answer == word)){
                cout << "***********************************************************" << endl; 
                cout << "* TRY AGAIN.                                              *" << endl;
               }// else if bracket


               if ((!(answer == word))) {
               cout << "*********************************************************** " << endl;
               cout << endl << endl;
               } 

        }while (!(answer == word));

        
    }else if(size == 5){
        
        do {

               // Tells the user what to enter, displays a hint, and outputs the word they 
               // need to unscramble
               cout << "***********************************************************" << endl;
               cout << "* Unscramble: || ";
               cout << word.at(2) << word.at(0) << word.at(1) << word.at(4) << word.at(3)
                    << " ||                                *" << endl;

               cout << "* answer: ";
               cin  >> answer;



                if (answer == "hint"){
               cout << "***********************************************************" << endl; 
               cout << "* HINT: " << hint << endl;
               cout << "***********************************************************" << endl; 
               cout << "* Make sure your caps lock is off and                     *" << endl;
               cout << "* everything you enter is in lower case with no spaces.   *" << endl;

               }else if (!(answer == word)){
                cout << "***********************************************************" << endl; 
                cout << "* TRY AGAIN.                                              *" << endl;
               }// else if bracket


               if ((!(answer == word))) {
               cout << "*********************************************************** " << endl;
               cout << endl << endl;
               } 

        }while (!(answer == word));

        
        
        
        
    }else if(size == 6){
        do {
               // Tells the user what to enter, displays a hint, and outputs the word they 
               // need to unscramble
               cout << "***********************************************************" << endl;
               cout << "* Unscramble: || ";
               cout << wcout << word.at(5) << word.at(3) << word.at(1) << word.at(0) << word.at(4) << word.at(2)
                    << " ||                                *" << endl;

               cout << "* answer: ";
               cin  >> answer;



               if (answer == "hint"){
                cout << "***********************************************************" << endl; 
                cout << "* HINT: " << hint << endl;
                cout << "***********************************************************" << endl; 
                cout << "* Make sure your caps lock is off and                     *" << endl;
                cout << "* everything you enter is in lower case with no spaces.   *" << endl;

               }else if (!(answer == word)){
                cout << "***********************************************************" << endl; 
                cout << "* TRY AGAIN.                                              *" << endl;
               }// else if bracket


               if ((!(answer == word))) {
               cout << "*********************************************************** " << endl;
               cout << endl << endl;
               } 

        }while (!(answer == word));

    
    }else if(size == 7){
            
        do {
               // Tells the user what to enter, displays a hint, and outputs the word they 
               // need to unscramble
               cout << "***********************************************************" << endl;
               cout << "* Unscramble: || ";
               cout << word.at(4) << word.at(3) << word.at(1) << word.at(6)
                    << word.at(2) << word.at(0) << word.at(5)
                    << " ||                                *" << endl;
               
               cout << "* answer: ";
               cin  >> answer;



               if (answer == "hint"){
                cout << "***********************************************************" << endl; 
                cout << "* HINT: " << hint << endl;
                cout << "***********************************************************" << endl; 
                cout << "* Make sure your caps lock is off and                     *" << endl;
                cout << "* everything you enter is in lower case with no spaces.   *" << endl;

               }else if (!(answer == word)){
                cout << "***********************************************************" << endl; 
                cout << "* TRY AGAIN.                                              *" << endl;
               }// else if bracket


               if ((!(answer == word))) {
               cout << "*********************************************************** " << endl;
               cout << endl << endl;               
               } 

        }while (!(answer == word));
            

    }else if(size == 8){
             
        do {
                // Tells the user what to enter, displays a hint, and outputs the word they 
                // need to unscramble
                cout << "***********************************************************" << endl;
                cout << "* Unscramble: || ";
                cout << word.at(5) << word.at(3) << word.at(2) << word.at(0) << word.at(7)
                     << word.at(6) << word.at(4) << word.at(1)
                     << " ||                                *" << endl;

                cout << "* answer: ";
                cin  >> answer;



               if (answer == "hint"){
                cout << "***********************************************************" << endl; 
                cout << "* HINT: " << hint << endl;
                cout << "***********************************************************" << endl; 
                cout << "* Make sure your caps lock is off and                     *" << endl;
                cout << "* everything you enter is in lower case with no spaces.   *" << endl;

               }else if (!(answer == word)){
                cout << "***********************************************************" << endl; 
                cout << "* TRY AGAIN.                                              *" << endl;
               }// else if bracket


               if ((!(answer == word))) {
               cout << "*********************************************************** " << endl;
               cout << endl << endl;
               } 
    
        }while (!(answer == word));
    }// end of else if(size == 8) statement        


}// end of function