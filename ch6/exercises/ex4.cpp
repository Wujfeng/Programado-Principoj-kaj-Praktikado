/*
    ex4.cpp: Rework exercise 19 from chapter 4. 
    Use a Token-like Name_value instead of two vectors.
    Chapter 6. Exercise 4.
    ２０１６年１１月２５日
*/

#include "std_lib_facilities.h"

class Name_value {
public:
    string name;
    double score;	
    Name_value (string str, double val)
        :name (str), score (val) {} 
};

int main() 
try { 
    vector <Name_value> nvVector;
    for (int i = 0; i < 10; ++i) {
        double d = 0.0;
        d += i;
        nvElement ("Chetan", d);
        nvVector.push_back (nvElement); 
    }

    for (int i = 0; i < nvVector.size(); ++i) 
        cout << nvElement.name << " " << nvElement.score << endl;

    return 0;
}

catch (exception &e) {
    cerr << "error: " << e.what() << '\n';
    return -1;
}

catch (...) {
    cerr << "Oops! Something unexpected happened somewhere." << '\n';
    return -2;
}
 
