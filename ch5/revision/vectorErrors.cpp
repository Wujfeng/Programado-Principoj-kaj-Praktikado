// vectorErrors.cpp: run a default vector exception, out_of_range
// verdastelo; 0.1
// "std_lib_facilities.h" is part of Programming - Principles and Practice
// using C++, a beginners' programming book

#include "std_lib_facilities.h"

int main() 
try {
  vector <int> ages;
  int age;
  while (cin >> age) ages.push_back (age);
  for (int i = 0; i <= ages.size(); ++i) 
    cout << "ages [" << i << "] == " << ages[i] << endl;
  return 0;
}

catch (out_of_range) {
  cerr << "Oops! Range error!\n";
  return 1;
}

catch (...) {
  cerr << "Something went wrong somewhere!\n";
}
