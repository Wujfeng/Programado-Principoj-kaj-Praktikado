// Program: drill.cpp
// Description: Debug the program. 
// Author: Четан Ананд (verdastelo) 

#include "std_lib_facilities.h" 
using namespace std; 

int main()
try {
  cout << "Success!\n";
  cout << "Success!\n";
  cout << "Success" << "!\n"; 
  cout << "Success!" << endl; 
  int res = 7; vector <int> v1(10); v1[5] = res; cout << "Success!\n"; 
  vector <int> v(10); v[5] = 7; if (v[5]==7) cout << "Success!\n";
  if (!0) cout << "Success!\n"; else cout << "Fail!\n"; 
  bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n"; 
  return 0;
}

catch (exception& e) {
  cerr << "error: " << e.what() << endl; 
  return 1; 
}

catch (...) {
  cerr << "Oops! Unknown exception!\n";
  return 2; 
}
