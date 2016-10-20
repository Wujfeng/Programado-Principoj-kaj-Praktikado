// narrowcast.cpp; Find out how narrowcast<> works.
// verdastelo; 0.1

#include "std_lib_facilities.h"

int main()
try {
  cout << "Enter a number: ";
  int i = 0;
  cin >> i;
  int x = narrow_cast <int> (i); error("Not an int.");
  return 0;
}

catch (runtime_error& e) {
  cerr << "runtime error: " << e.what() << '\n';
  return 1;
}

catch (...) {
  cerr << "Oops! Something went wrong!\n";
  return 2;
}
