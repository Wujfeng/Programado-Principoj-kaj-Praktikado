// Program: tryThis6.cpp
// Purpose: Find arguments so that the precondition holds but the postcondition doesn't.
// Author: Chetan Anand (verdastelo) 

#include "std_lib_facilities.h"
using namespace std; 

int area (int length, int width) {
  if (length <= 0 || width <= 0) error ("Length or width is non-positive."); 
  int a = length * width; 
  if (a <= 0) error ("Area cannot be negative."); 
  return a; 
}

int main() {
  cout << "Enter length and width: ";
  int l, w = 0; 
  cin >> l >> w; 
  cout << "area: " <<  area (l, w) << endl; 
  return 0;
}
