// Program: ex8.cpp
// Author: Четан Ананд (verdastelo)
// Description: A user enters numbers and the program asks the user how many of the entered numbers he or she wants added...
// ...The user tells the program. And voila!
// Task 1: The programs reads a series of numbers and stores them in a vector. DONE
// Task 2: Ask how many of the numbers the user wants to sum. Call that number n.
// Task 3: Handle all inputs.
// Take 4: Give an error message if n exceeds the vector's length.

#include "std_lib_facilities.h"
using namespace std;

int main() {
  cout << "Please enter some numbers: (Press \"|\" to stop): ";
  vector <int> num_storage; // Numbers' container.
  int i = 0;
  while (cin >> i) { // Reads numbers.
      num_storage.push_back(i); // Stores numbers.
  }

  cout << "Please enter how many of the numbers you wish to sum, starting from the first: ";
  int n = 0; // The number a user wants to sum.
  if (cin >> n) cout << "n is: " << n << endl;
  int sum = 0; // Stores the sum of n integers.
  for (int j = 0; j < n; j++) {
    sum += num_storage[j];
  }

  cout << "The sum of " << n << " numbers is " << sum << "." << endl;

  return 0;
}
