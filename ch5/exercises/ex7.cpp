// Program: ex7.cpp
// Author: Четан Ананд (verdastelo)
// Description: This program finds the roots of quadratic equations.
// NOTE: Test it when you've the Internet.

#include "std_lib_facilities.h"
using namespace std;

class eq_cannot_be_solved{}; // Handles the exception when d is less than zero.

double quad_eq (double a, double b, double c) {
  double x1 = 0.0; // First root.
  double x2 = 0.0; // Second root.
  double d = 0.0; // D is for determinent.
  d = ((b*b) - (4*a*c));
  cout << "d is " << d << endl;
  if (d < 0) throw eq_cannot_be_solved();
  else
      x1 = ((d-b)/(2*a)); // Quadratic equation: -b + or - (b*b - 4ac)^(1/2) / 2a
      x2 = (-(d+b)/(2*a));

      cout << "The roots are " << x1 << " and " << x2 << endl;

 return 0.0;
}

int main()
try {
  cout << "Enter your quadratic equation: " << endl;
  double a, b, c;
  while (cin >> a >> b >> c) {
     quad_eq (a, b, c);
 }
  return 0;
}

catch (eq_cannot_be_solved()) {
  cerr << "Can't solve the equation." << endl;
  return 1;
}

catch (...) {
  cerr << "Something went wrong somewhere." << endl;
  return 2;
}
