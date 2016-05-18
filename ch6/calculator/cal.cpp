// cal.cpp: Четан Ананд
// A simple calculator.

#include <iostream>
#include <string>
using namespace std;

void eval_exp (string exp) { // Evaluate an expression.
  for (int i = 0; i < exp.size(); i++) {
    cout << exp[i] << endl;
  }
}

int main() {
  cout << "Enter your expression: ";
  string expression;
  getline (cin, expression);
  eval_exp (expression);
  return 0;
}
