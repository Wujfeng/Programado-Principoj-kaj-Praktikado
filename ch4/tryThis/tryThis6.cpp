#include <iostream> 
#include <string> 
#include <vector>
#include <algorithm> 

using namespace std; 

int main()
{
    vector <string> words; 
    string word; 
    while (cin >> word) {
        words.push_back (word); 
        }
        
    cout << "Number of words: " << words.size() << endl; 
    
    sort(words.begin(), words.end()); 
    
    for (int i = 0; i < words.size(); ++i) {
        if (i == 0 || words[i-1] != words[i]) {
        // switch-statement can't be used here. 
        // It doesn't work on strings. 
        // So here is an ugly, but workable solution. 
            if (words[i] == "Anna" || words[i] == "Mike") {
                cout << "Bleep!" << endl; 
                } 
            else 
                cout << words[i] << '\n'; 
            }
        }
}
