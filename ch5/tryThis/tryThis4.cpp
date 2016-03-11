// Author: Chetan Anand (verdastelo)
// Description: Show us what an uncaught exception looks like. To do that, run a program with error() without catching any exceptions. 

#include "std_lib_facilities.h" 
using namespace std; 

int main()
try {
  cout << "Tell me your age: ";
  int age; 
  if (cin >> age) {
      cout << "You are " << age << " years old." << endl; 
  }
  else
      error ("The input wasn't correct.");
  return 0;
}

catch (...) {
  cerr << "The input was messed up." << endl;
  return 1;
}
