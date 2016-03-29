// Description: An elementary calculator.
// Author: Четан Ананд (verdastelo)

#include "std_lib_facilities.h"
using namespace std;

int main() {
  class Token {
  public:
      char kind;
      double value;
      Token (char ch)
              :kind (ch), value (0) {}
      Token (char ch, double val)
              :kind (ch), value (val) {}
  };

  Token t1 = Token ('+');
  Token t2 = Token ('+', 20);

  vector <Token> tok;

  tok.push_back(t1);
  tok.push_back(t2);

  for (int i = 0; i < tok.size(); i++) {
      cout << tok.kind[i] << ' ' << tok.value[i] <<  endl;
  }

  cout << t1.kind << ' ' <<  t1.value << endl;
  cout << t2.kind << ' ' << t2.value << endl;

  cout << t1.kind << ' ' << t2.value << endl;

  return 0;
}
