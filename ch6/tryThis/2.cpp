// 2.cpp: Четан Ананд
// Описание: Play with tokens.

#include "std_lib_facilities.h"
using namespace std;

int main() {
  class Token {
  public:
    char kind;
    double value;
    Token (char ch)
      :kind (ch), value (0) {}
    Token (double val)
      :kind (0), value (val) {}
    Token (char ch, double val)
      :kind (ch), value (val) {}
  };

  vector <Token> tok;
  char ch;
  double val;
  cout << "Enter an expression: ";
  while (cin >> val >> ch) {
    Token t (ch, val);
    tok.push_back (t);
  }

  cout << "tok.size() == " <<  tok.size() << endl;
  for (int i = 0; i < tok.size(); i++) {
    cout << tok[i].value << '\n' << tok[i].kind << endl;
  }
  return 0;
}
