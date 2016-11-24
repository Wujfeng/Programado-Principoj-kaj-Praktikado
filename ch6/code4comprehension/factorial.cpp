/*
  factorial.cpp
  A function to figure out factorial.
  To be used in exercise 3 of PPAP of BS.
  ２０１６年１１月２４日
*/

#include <iostream>

using namespace std;

int factorial (int n);

int main() {
  cout << "Enter a number (between 1 and 30): ";
  int num = 0, result = 0;
  if (cin >> num) result = factorial (num); 
  else cout << "Error. Enter a correct int. Existing." << endl;
  cout << "result = " << result << endl;
  return 0;
}

int factorial (int n) {
  int result = 1;
  int * res = &result;

  if ((n >= 1) && (n <= 30)) {
    for (int i = n; i > 0; --i) {
      *res *= i;
    }
    return result;
  }

  else {
    cout << "An error occurred." << endl;
    return -1;
  }

}
