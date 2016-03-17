// Description: Create a Celsius-Fahrenheit converter.
// Author: Четан Ананд (verdastelo)
// Program: Exercise 6

#include "std_lib_facilities.h"
using namespace std;

class lower_than_abs{}; // lower than zero Kelvin (absolute)

double ftoc (double fah) { // ftoc = Fahrenheit to Celsius
  double cel = 0.0;
  if (fah < -459.67) throw lower_than_abs(); // Zero Kelvin (0K) equals -459.67F
  else {
      cel = ((5.0/9.0) * (fah - 32));
       }
  if (cel > -273.15) throw lower_than_abs(); // 0K equals -273.15K
  else return cel;
}

double ctof (double cel) { // ctof = Celsius to Fahrenheit
  double fah = 0.0;
  if (cel < -273.15) throw lower_than_abs(); // 0K equals -273.15
  else {
       fah = (cel * (9.0/5.0)) + 32;
      }
  if (fah < -459.67) throw lower_than_abs(); // 0K equals -458.67F
  else return fah;
}

int main()
try {
  double t = 0.0; // t = temperature (Celsius or Fahrenheit)
  char u = ' '; // u = unit (Celsius or Fahrenheit)
  cout << "WARNING: Any non-numeric input will cause the program to stop." << endl;
  cout << "Enter a temperature value followed by a unit (Celsius (C) or Fahrenheit (F)): ";
  while (cin >> t >> u) {
      if ((u == 'c') || (u == 'C')) {
              if (u < -273.15) throw lower_than_abs();
              double f = ctof (t); // F = Fahreneheit
              if (f < -459.67) throw lower_than_abs();
              cout << "Your value of " << t << u << " equals " << f << "F." << endl;
      }

      if ((u == 'f') || (u == 'F')) {
              if (u < -459.67) throw lower_than_abs();
              double c = ftoc (t); // c = Celsius
              if (c < -273.15) throw lower_than_abs();
              cout << "You value of " << t << u << " equals " << c << "C." << endl;
      }
  }
  return 0;
 }

catch (lower_than_abs()) {
  cerr << "There is a mistake!\n";
  cerr << "Temperature in our universe can't be less than 0K.\n";
  return 1;
}

catch (...) {
  cerr << "Something went wrong somewhere!\n";
  return 2;
}
