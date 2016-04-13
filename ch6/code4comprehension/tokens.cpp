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

Token get_token();

vector <Token> tok;

int main() {
  while (cin) {
      Token t = get_token();
      tok.push_back(t);
  }

  for (int i = 0; i < tok.size(); i++) {
      cout << tok[i].kind << ' ' << tok[i].value << endl;
  }
  return 0;
}
