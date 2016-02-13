/*
    Create a rock, papers and scissors game.
    Try to solve it again with vectors.  
*/

#include <iostream> 
#include <cstdlib> 

using namespace std; 

int main()
{

    cout << "Welcome to Rock, Paper and Scissors!\n"; 
    cout << "You will play against a computer.\n"; 
    cout << "When prompted for a response, you will enter "
         << "either (r)ock, (p)aper or (s)scissor.\n";
    cout << "Immediately the computer will offer its response,"
         << " and the result.\n";
         
    cout << "Enough of talk! Enter your input: \n";  
         
    char c = ' '; // stores user's input
    int computer_guesses; // stores a random number 
    char computer_answers = ' '; // stores the computer's response 
    
    while (cin >> c) {
    
    // this piece of code is in while because it needs to run
    // every time the loop is repeated. 
    
        srand (time(NULL)); 
        computer_guesses = rand() % 3 + 1;
        
         if (computer_guesses == 1) {
            computer_answers = 'r';
            }
         if (computer_guesses == 2) {
            computer_answers = 's';
            }
         if (computer_guesses == 3) {
            computer_answers = 'p';
            }
         
        // now the user input will be compared with the 
        // computer's guess 
        
        switch (c) {
            case 'r': 
                if (computer_answers == 'p') {
                    cout << "Computer guesses paper. You lose.\n"; 
                    break; 
                    }
                else 
                    cout << "You win!\n";
                    break; 
             case 's':
                if (computer_answers == 'r') {
                    cout << "Computer guesses rocks. You lose.\n"; 
                    break; 
                    }
                else 
                    cout << "You win!\n";
                    break; 
             case 'p':
                if (computer_answers == 's') {
                    cout << "Computer guesses scissors. You lose.\n"; 
                    break; 
                    }
                else 
                    cout << "You win!\n";
                    break; 
             default:
                cout << "Please enter a valid input.\n"; 
                break;
            } 
            }
      return 0; 
} 
