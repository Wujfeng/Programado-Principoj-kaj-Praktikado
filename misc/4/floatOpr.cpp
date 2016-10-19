#include <iostream> 

using namespace std;

int main() {
  float pi = 3.14;
  cout << "Let's increment pi by one. " << ++pi << endl;
  cout << "Multiply pi by 2. ";
  float doublePI = 0.0;
  doublePI = pi *= 2;
  cout << doublePI << endl;
  cout << "Module on pi. " << doublePI % 2 << endl;
  return 0;
}
