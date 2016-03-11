// Писатель: Четан Ананд (verdastelo) 
// Klarigo: Ludado per nombraj sistemoj hex kaj octal.

#include "std_lib_facilities.h" 
using namespace std; 

int main() 
try {
  char c = 0x41; 
  cout << "c == " << c << endl; 
  cout << "Enter a new value of c: "; 
  if (cin >> c) {
      cout << "New c == " << c << endl; 
  }
  else 
      error ("Something went wrong!"); 
  return 0;
}

catch (...) {
  cerr << "There was a mistake somewhere." << endl;
  return 1;
}
