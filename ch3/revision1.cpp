#include <iostream>

using namespace std;

int main() {
  cout << "Enter a character: ";
  char c;
  cin >> c;
  cout << "The ASCII value of " << c << " is " << (c + '1') - 1 << "." << endl;
  cout << "The ASCII value of " << c << " is " << (c + 1) - 1 << "." << endl;
  return 0;
}