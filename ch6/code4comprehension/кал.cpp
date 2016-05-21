// кал.cpp: Четан Ананд
// Описание: Run a small calculator.

/*
	Although this program works in a manner, it's hard to
	use. An expression has to be entered twice.
*/

#include "std_lib_facilities.h"

int main() {
  cout << "Пишите экспрецию: (+, -, * и /): ";
  int lval = 0;
  int rval;
  char op;
  cin >> lval;			// read the leftmost operand
  if (!cin) error ("У нас нет операнда.");
  while (cin >> op) {		// read the operator and the right-hand
    cin >> rval;		// operand repeadtedly
    if (!cin) error ("Где второй операнд?");
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
      cout << "Result: " << lval << '\n';
      return 0;
    }
  }
  error ("Плохоя экспреция.");
}
