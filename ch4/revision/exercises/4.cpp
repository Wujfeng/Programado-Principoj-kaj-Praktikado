/*

  1. Show the user a number. Ask if it's what he thought of.
  2. If not, ask if his number is less or greater than the number the program displays.
  3. If it's

*/

#include <iostream>

using namespace std;

int main() {
  char answer = 'c';
  int number = 50;

  cout << "Did you think of " << number << "?" << endl;
  cout << "Press 'y' for 'yes' and 'n' for 'no.'" << endl;
  cin >> answer; 
  switch (answer) {
  case 'y':
    cout << "Voila!" << endl;
    break;
  case 'n':
    cout << "Is your number less than (l) or greater than (g) " << number << "?" << endl;
    break;
  default:
    cout << "Please enter either 'y' or 'n' in lowercase." << endl;
    break;
  }

  while (cin >> answer) {
    switch (answer) {
      case 'g':
        number = number / 2;
      case 'l':
        number = 
  return 0;
}

