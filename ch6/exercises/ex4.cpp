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
    vector <Name_value> nameValues;

    string n;
    double d;
    cout << "Enter a name followed by the person's score: ";

    while (cin >> n >> d) {
        for (int i = 0; i < nameValues.size(); ++i)
            if (nameValues[i].name == n) error ("Can't enter the same name twice.");
        nameValues.push_back (Name_value (n, d));  
    } 
    
    for (int i = 0; i < nameValues.size(); ++i) 
        cout << nameValues[i].name << '\t' << nameValues[i].score << endl;
   
    return 0;
}

catch (exception &e) {
    cerr << "error: " << e.what() << '\n';
    return 1;
}

catch (...) {
    cerr << "Oops! Something unexpected happened somewhere." << '\n';
    return 2;
}
 
