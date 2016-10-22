// cal1.cpp
// An elementary calculator.
// verdastelo
// 2016-10-22

#include "std_lib_facilities.h"

int main() 
try {
  cout << "Expression: ";
  int lval = 0;
  int rval;
  char op;
  cin >> lval;
  if (!cin) error ("No first operand.");
  while (cin >> op) {
    cin >> rval;
    if (!cin) error ("No second operand.");
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
  error ("A bad expression.");
}

catch (exception& e) {
  cerr << "Error: " << e.what() << '\n';
  return 1;
}

catch (...) {
   cerr << "Error: " << "Oops! Something went wrong." << '\n';
   return 2;
} 
