// runerr.cpp, to run "runtime_error". it's an exception.
// verdastelo; 0.1;

#include "std_lib_facilities.h"

int main()
try {
  int i = 0;
  cout << "Enter a number: "; 
  cin >> i;
  if (!cin) error ("This isn't a number.");
  cout << "You entered " << i << endl;
  return 0;
}
/*
catch (runtime_error& e) {
  cerr << "runtime error: " << e.what() << '\n';
  return 1;
}

catch (...) {
  cerr << "Oops! An unknown exception!\n";
  return 2;
}
*/
