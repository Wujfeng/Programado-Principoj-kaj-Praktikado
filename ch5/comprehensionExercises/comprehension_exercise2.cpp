// Verkisto: Ĉetan Anand (verdastelo) 
// Klarigo: Montru kiel programo forĵetas kaj kaptas esceptojn. 

#include "std_lib_facilities.h"
using namespace std; 

class Bad_area {}; 

int area (int length, int width) {
  if (length <= 0 or width <= 0) throw Bad_area(); // Make an object of type Bad_area() and throw it. 
  return length * width; 
}

int framed_area (int x, int y) {
  return area (x-2, y-2);
}

int main()
try {
  int x = -1 
  int y = 2;
  int z = 4;

  int area1 = area (x, y);
  int area2 = framed_area (1, z);
  int area3 = area (y, z);
  double ratio = area1 / area3;
}

catch (Bad_area) {
  cout << "Oops! Bad arguments to area()\n.";
}
