// Program: ex11.cpp
// Author: Четан Ананд (verdastelo)
// Description: Print a Fibonnaci series. Find the largest number in the series that can fit in int.

#include "std_lib_facilities.h"
using namespace std;

int main() {
  int i1 = 0;
  int i2 = 1;
  int test = (i1 + i2);

  while (test) {
      cout << "Фибонаци: "<<  test << endl;
      i1 = i2;
//      cout << "i1: " << i1 << endl;
      i2 = test;
//      cout << "i2: " << i2 << endl;
      test = (i1 + i2);
//      cout << "test2: " << test << endl;
  }

  return 0;
}
