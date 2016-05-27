// tokens.cpp: Четан Ананд
// Описание: Study tokens.
// Результаты: Token works if the arguments are either char or a char-double pair.

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

int main() {
  Token t = Token ('a');
  cout << "Token t = Token ('a');" << endl;
  cout << "t is a Token of kind «" << t.kind << "» and value «" << t.value << "»" << endl;

  Token rupiah = Token ('r', 20);
  cout << "Token rupiah = Token ('r', 20);" << endl;
  cout << "rupiah is a Token of kind «" << rupiah.kind << "» and value «" << rupiah.value << "»" << endl;


  Token test = Token (200);
  cout << "Token test = Token (200);" << endl;
  cout << "test is a Token of kind «" << test.kind << "» and value «" << test.value << "»" << endl;

/*
  // For fun
  char c;
  for (int i = 0; i <= 255; i++) {
    c = i;
    cout << i << '\t' << c << endl;
  }
*/

/*
  This block doesn't compile.
  Token sentence = Token ("Chetan");
  cout << "Token sentence = Token (\"Chetan\"\);"
  cout << "sentence is a Token of kind «" << sentence.kind << "» and value «" << sentence.value << "»" << endl;
*/
  return 0;
}
