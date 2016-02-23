#include <iostream> 
#include <vector> 
#include <string> 
#include <algorithm>

using namespace std; 

int main()
{
    int score;
    vector <int> scores; 
     
    string name;
    vector <string> names; 
    
    cout << "Enter a name followed by scores: "; 
    
    while (cin >> name >> score) {
    
        for (int i = 1; i < names.size(); ++i) {
            if (name == names[i]) {
            cout << "Error.";
            }
         }
    
        names.push_back(name);
        scores.push_back(score); 

        }
        

    
    for (int i = 0; i < names.size(); i++) {
        cout << names[i] << " == " << scores[i] << '\n';
        }
        
     return 0;
}
