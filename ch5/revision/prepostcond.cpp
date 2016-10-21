// prepostcond.cpp; Write a program with a loop and pre- and post-conditions.
// verdastelo; 0.1;
// Couldn't call the square_root function. So used an alternative to
// to use pre- and post-conditions. It doesn't make sense, I know.

#include "std_lib_facilities.h"

int main() 
try {
  cout << "This program finds square roots." << endl;
  cout << "Enter a positive number (n) to see its square root";
  cout << " and the square roots of all numbers in the range ";
  cout << "[n+10)" << endl;
  cout << "Enter your number: "; 
  double n = 0;
  double result = 0;
  cin >> n;
  if (n < 0) error ("Your number is negative.");
  for (int i = n; i < n+10; ++i) {
    result = i-100;
    cout << i << "'s square root is " << result << endl;
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
