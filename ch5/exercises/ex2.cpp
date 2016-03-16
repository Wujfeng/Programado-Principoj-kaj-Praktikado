// Description: Debug a Celsius to Kelvin converter. Solve exercises from two to six.
// Author: Четан Ананд (verdastelo)
// Date: 2016-03-16
// ex2: Debug the program. DONE
// ex3: Don't let user enter a Celsius value lower than the absolute temperature. DONE
// ex4: Do ex3 again. Handle the error inside ctok(). DONE

#include "std_lib_facilities.h"
using namespace std;

class lower_than_absolute{};

double ctok (double c) {
  double k = 0.0;
  if (c < -273.15) throw lower_than_absolute();
  else
      k = c + 273.15;
  return k;
}

int main()
try {
  double c = 0;
  cout << "Enter temperature in Celsius: (Or any non-numerical value to quit.) ";
  while (cin >> c) {
      double k = ctok (c);
      cout << "You entered " << k << "K." <<  endl;
  }
  return 0;
}

catch (lower_than_absolute) {
  cerr <<  "Temperature less than 0K. Unacceptable. Program exiting." << endl;
  return 1;
}

/*
 The list of errors before this program was debugged:

ex2.cpp: In function ‘double ctok(double)’:
ex2.cpp:10:10: error: expected primary-expression before ‘int’
   return int;
          ^
ex2.cpp:10:10: error: expected ‘;’ before ‘int’
ex2.cpp:10:10: error: declaration does not declare anything [-fpermissive]
ex2.cpp: In function ‘int main()’:
ex2.cpp:15:10: error: ‘d’ was not declared in this scope
   cin >> d;
          ^
ex2.cpp:16:22: error: cannot convert ‘const char*’ to ‘double’ for argument ‘1’ to ‘double ctok(double)’
   double k = ctok("d");
                      ^
ex2.cpp:17:3: error: ‘Cout’ was not declared in this scope
   Cout << k << endl;
   ^
*/

/* ex2 code:

class lower_than_absolute{};

double ctok (double c) {
  double k = c + 273.15;
  return k;
}

int main()
try {
  double c = 0;
  cout << "Enter temperature in Celsius: (Or any non-numerical value to quit.) ";
  while (cin >> c) {
      if (c < -273.15) throw lower_than_absolute();
      else {
              double k = ctok (c);
              cout << "You entered " << k << "K." <<  endl;
           }
  }
  return 0;
}

catch (lower_than_absolute) {
  cerr <<  "Temperature less than 0K. Unacceptable. Program exiting." << endl;
  return 1;
}

*/
