/*
    Create a rock, papers and scissors game. 
*/

#include <iostream> 
#include <vector> 

using namespace std; 

int main()
{
    cout << "東京タワーを知っていますか。\n"; 
    cout << "Let's play rock, paper and scissors.\n"; 
    cout << "Enter (r)ock, (p)aper and (s)cissors to play.\n";
    cout << "All other values will be rejected.\n"; 
    
    char c = ' '; // user input
    char res = 's'; // random answer by the program
    
    vector <char> responses;
    char user_input = ' '; 
    
    while (cin >> user_input) {
        if ((user_input == 's') or 
            (user_input == 'p') or 
            (user_input == 'r')) {
            
            responses.push_back(user_input); 
            }
        
        else 
            cout << "Thank you!\n";
            break; 
        } 
    
    while (cin >> c) {
        switch (c) {
            case 'r': 
                if (res == 'p') cout << "It's a p. You lose!\n";
                if (res == 's') cout << "It's an s. You win!\n";
                if (res == 'r') cout << "It's an r. A draw!\n"; 
                break; 
            case 'p':
                if (res == 'p') cout << "It's a p. A draw!\n";
                if (res == 's') cout << "It's an s. You lose!\n";
                if (res == 'r') cout << "It's an r. A win!\n";
                break;
            case 's': 
                if (res == 'p') cout << "It's a p. You win!\n";
                if (res == 's') cout << "It's an s. A draw!\n";
                if (res == 'r') cout << "It's an r. You lose!\n";
                break;
            default: 
                cout << "Please enter a valid input.\n"; 
                break;
            } 
            }
      return 0; 
} 
