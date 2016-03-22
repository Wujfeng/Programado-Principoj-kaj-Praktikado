// Program: draft1.cpp
// Author: Четан Ананд (verdastelo)
// Description: A barebones calculator that adds and substracts.

#include "std_lib_facilities.h"
using namespace std;

int main() {
  cout << "Please enter an expression (We can handle + and -): ";
  int lval = 0;
  int rval;
  char op;
  int res;
  cin >> lval >> op >> rval;
  if (op == '+') {
      res = lval + rval;
  }

  else if (op == '-') {
      res = lval - rval;
  }

  cout << "Result: " << res << endl;
  return 0;
} 
