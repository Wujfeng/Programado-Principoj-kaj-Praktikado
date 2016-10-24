// constructors.cpp
// Play around with constructors.
// verdastelo
// 2016-10-23

#include "std_lib_facilities.h"

class Name_and_age {
  public:
    string name;
    int age;
    Name_and_age (string n, int a)              // n is name and a is age
      : name (n), age (a) {}
    Name_and_age (int a)
      : name ("No name"), age (a) {}
    Name_and_age (string n)
      : name (n), age (0) {}
}; 

int main() 
try {
  string name;
  int age;
  cout << "Enter your name: ";
  if (!(cin >> name)) error ("You didn't enter your name."); 
  cout << "Enter your age (in years): ";
  if (!(cin >> age)) error ("You didn't enter your age correctly.");

  Name_and_age nameage (name, age);

  cout << "You are " << nameage.age << " years old." << endl;
  cout << "Your name is " << nameage.name << "." << endl;
  return 0;
}

catch (exception& e) {
  cerr << "Error: " << e.what() << '\n';
  return 1;
}

catch (...) {
  cerr << "Error: Something went wrong somewhere." << '\n';
  return 2;
}

 
