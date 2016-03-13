// Author: Четан Ананд (verdastelo) 
// Description: Test narrow_cast(). It's a function defined in std_lib_facilities.h. 

#include "std_lib_facilities.h" 
using namespace std; 

int main() 
try {
  cout << "Enter an integer: ";
  int x1; 
  cin >> x1; 
  int x2; 
  x2 = narrow_cast<int>(x1); 
