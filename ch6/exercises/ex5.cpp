// ex5.cpp
// Parse a very small subset of the English grammar.
// Started on: 2016-12-01
// Completed on: 

#include "std_lib_facilities.h"

vector <string> verbs(4);

verbs[0] = "goes";
verbs[1] = "walks";
verbs[2] = "studies";
verbs[3] = "reads";

bool isVerb (string str) {
    for (int i = 0; i < verbs.size(); ++i)
        if (str == verbs[i]) return true;
    return false;
}

int main()
try {
    cout << "Write a verb from this set: goes, walks, studies, reads. ";
    string str;
    while (cin >> str) 
        if (isVerb(str)) cout << str << endl;
    cout << "You didn't enter a verb." << endl; 
    return 0;
}

catch (exception& e) {
    cerr << "error: " << e.what() << '\n'; 
    return 1;
}
catch (...) {
    cerr << "Oops: unknown exception!\n"; 
    return 2;
}
 
 
