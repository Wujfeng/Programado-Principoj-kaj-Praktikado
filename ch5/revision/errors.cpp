// errors.cpp: practice how to find and handle errors.
// verdastelo; 0.1
// "std_lib_facilities.h" is a library written by Bjarne Stroustrup for
// use with his book "Programming Principles and Practice Using C++."

#include "std_lib_facilities.h"

class Bad_area{};

int area (int length, int width) {
  if (length <= 0 || width <= 0) throw Bad_area();
  return length * width;
}

int main() 
try {
  cout << "Enter length (l) and width (w). " << endl;
  int l = 0; int w = 0;
  cout << "length: "; 
  cin >> l;
  cout << "width: ";
  cin >> w;
  int area1 = area(l, w);
  cout << "area is " << area1 << endl; 
  return 0;
}

catch (Bad_area) {
  cout << "Either length or width is either negative or zero." << endl;
}
