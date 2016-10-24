// token.cpp
// Play with tokens.
// verdastelo
// 2016-10-22

#include "std_lib_facilities.h"

class Token {
  public:
    char kind;
    double value;
    Token (char ch)
      :kind (ch), value (0) {}
    Token (char ch, double val)
      :kind (ch), value (val) {}
};

int main() 
try {
  cout << "Enter a char: ";
  char c = ' ';
  cin >> c;
  if (!cin) error ("This isn't a char. Kindly add a char.");

  cout << "Enter a double: ";
  double d = 0.0;
  cin >> d;
  if (!cin) error ("This isn't a double. Kindly add a double.");

  Token t (c, d);
  cout << "t.kind: " << t.kind << '\n' << "t.value: " << t.value << endl;
  return 0;
}

catch (exception& e) {
  cerr << "Error: " << e.what() << '\n';
  return 1;
}

catch (...) {
  cerr << "Error: " << "Something went wrong." << '\n';
  return 2;
}
