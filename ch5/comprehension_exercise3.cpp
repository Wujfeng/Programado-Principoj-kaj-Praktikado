// Description: Find a range error in this program.
// Range error found.
// Now make catch (out_of_range_error) run.

#include "std_lib_facilities.h"
using namespace std;

int main()
try {
  vector <int> v;
  int i;
  while (cin >> i) v.push_back(i);
  for (int i = 0; i <= v.size(); ++i) {
      cout << "v[" << i << "] == " << v[i] << endl;
  }
}
catch (out_of_range_error) {
  cerr << "Oops! Range error!\n";
  return 1;
}

catch (...) {
  cerr << "Exception! Something went wrong.\n";
  return 2;
}
