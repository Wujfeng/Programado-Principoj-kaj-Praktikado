// Program: draft2.cpp
// Author: Четан Ананд (verdastelo)
// Description: The program is a barebones calculator. It supports addition, multiplication, substraction and division. It doesn't always produce accurate results.

#include "std_lib_facilities.h"
using namespace std;

int main() {
  cout << "Please enter an expression (we can handle +, -, * and /): ";
  int lval = 0;
  int rval;
  char op;
  cin >> lval;
  if (!cin) error("No first operand");
  while (cin >> op) {
      cin >> rval;
      if (!cin) error ("No second operand");
  switch (op) {
      case '+':
              lval += rval;
              break;
      case '-':
              lval -= rval;
              break;
      case '*':
              lval *= rval;
              break;
      case '/':
              lval /= rval;
              break;
      default:
              cout << "Result: " << lval << endl;
              return 0;
  }
  }
  error ("Bad expression");
}
