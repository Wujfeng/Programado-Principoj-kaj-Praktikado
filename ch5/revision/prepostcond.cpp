// prepostcond.cpp; Write a program with a loop and pre- and post-conditions.
// verdastelo; 0.1;

#include "std_lib_facilities.h"

int main() 
try {
  cout << "This program finds if a number is greater than 100." << endl;
  cout << "Enter your number: "; 
  double n = 0;
  double result = 0;
  cin >> n;
  if (n < 0) error ("Your number is negative.");
  for (int i = n; i < n+10; ++i) {
    result = i-100;
    cout << i << " minus 10 is " << result << endl;
    if (result < 0) error ("Something is wrong in the loop.");
  }

//  if (result < 0) error ("Something is wrong in the loop.");
  return 0;
}

catch (runtime_error& e) {
  cerr << "error: " << e.what() << '\n';
  return 1;
}

catch (...) {
  cerr << "Something went wrong." << '\n';
  return 2;
} 
