/*
    exercise19.cpp
    It works now.
    Date: 2016-11-27
*/

#include "std_lib_facilities.h"

int main()
try {
    int score;
    vector <int> scores; 
     
    string name;
    vector <string> names; 
    
    cout << "Enter a name followed by scores: "; 
    
    while (cin >> name >> score) {
        names.push_back (name);
        scores.push_back (score);

        sort (names.begin(), names.end());

        for (int i = 1; i < names.size(); ++i) 
            if (names[i] == names[i-1]) error ("Can't enter the same name twice.");
    }       

    
    for (int i = 0; i < names.size(); i++) {
        cout << names[i] << " == " << scores[i] << '\n';
        }
        
     return 0;
}

catch (exception& e) {
    cerr << "error: " << e.what() << '\n';
    return 1;
}

catch (...) {
    cerr << "an unknown exception" << '\n';
    return 2;
}
