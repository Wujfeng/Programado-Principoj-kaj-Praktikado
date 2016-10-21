// postcond.cpp; This program has a pre- and a post-conditionThis program has a pre- and a post-condition.
// Find a value of length and a value of breath where the pre-condition holds but the post condition fails.
// verdastelo; 2016-10-22 (IST)

#include "std_lib_facilities.h"

int area (int length, int width) {
  if (length <= 0 || width <= 0) error ("Enter a positive length or breath.");
  int area = length * width;
  if (area <= 0) error ("The area is negative.");
  return area;
}

int main() 
try {
  cout << "This program finds area.\n";
  cout << "Enter length (l) and width (w): ";
  int l = 0;
  int w = 0;
  cin >> l >> w;
  cout << "Area: " << area (l, w) << endl;
  return 0;
}

catch (exception& e) {
  cerr << "Error: " << e.what() << '\n';
  return 1;
}

catch (...) {
  cerr << "An unknown error occurred." << '\n';
  return 2;
} 

