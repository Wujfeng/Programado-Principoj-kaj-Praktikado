// Program: drill.cpp
// Description: Debug the program.
// Author: Четан Ананд (verdastelo)

#include "std_lib_facilities.h"
using namespace std;

int main()
try {
/*  cout << "Success!\n";
  cout << "Success!\n";
  cout << "Success" << "!\n"
  cout << "Success!" << endl;
  int res = 7; vector <int> v1(10); v1[5] = res; cout << "Success!\n";
  vector <int> v(10); v[5] = 7; if (v[5]==7) cout << "Success!\n";
  if (!0) cout << "Success!\n"; else cout << "Fail!\n";
  bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n";
  string s = "ape"; bool c1 = "fool" > s; if (c1) cout << "9. Success!\n";
  string s1 = "ape"; if (s1 != "fool") cout << "10. Success!\n";
  string s2 = "ape"; if (s2 != "fool") cout << "11. Success!\n"; // Compiler doesn't alert me of that "cout < "Success!\n"" is an error.
  string s3 = "ape"; string s4 = "fool"; if (s3<s4) cout << "12. Success!]\n";
  vector <char> v(5); for (int i = 0; i < v.size(); ++i) cout << "13. Success!\n";
*/
//  vector <char> v(5); for (int i = 0; i <= v.size(); ++i) cout << "14. Success!\n";
//  string s = "Success!\n"; for (int i = 0; i < 6; ++i) cout << s[i] << endl;  // So a string is essentially a vector. ?!
//  if (true) cout << "Success\n!"; else cout << "Fail!\n";
//  int x = 65; char c = x; if (c == x) cout << "Success\n!"; // x = 2000 is a huge number. Reduced that to 65.
//  string s = "Success!\n"; for (int i = 0; i < 10; ++i) cout << s[i] << endl;
//  vector <int> v(5); for (int i = 0; i < v.size(); ++i) cout << "Success!\n";
//  int i = 11; int j = 9; while (i < 10) ++j; if (j < i) cout << "Success!\n";
//  int x = 3; double d = 5/(x-2); if (d != 2*x+0.5) cout << "Success!\n";
//  string s = "Success!\n"; for (int i = 0; i < 10; ++i) cout << s[i] << endl;
//  int i = 11; int j = 1;  while (i < 10) ++j; if (j < i) cout << "Success!\n";
//  int x = 4; double d = 5 / (x - 2); if (d = *2*x + 0.5*) cout << "Success!\n";
  cout << "Success!\n";
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
