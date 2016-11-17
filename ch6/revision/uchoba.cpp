// uchoba.cpp
// Study Stroustrup's calculator program
// verdastelo 我会说世界语。
// ２０１６年１１月１０日

#include "std_lib_facilities.h"

class Token { // Error 1: "class" was written "lass."
public:
    char kind;        // what kind of token
    double value;     // for numbers: a value
    Token(char ch)    // make a Token from a char
        :kind(ch), value(0) { }
    Token(char ch, double val)     // make a Token from a char and a double
        :kind(ch), value(val) { }
};

int main() {
  Token t = Token ('a');
  cout << "t.kind is " << t.kind << " and t.value is " << t.value << endl;

  Token t1 = Token (0);
  cout << "t1.kind is " << t1.kind << " and t1.value is " << t1.value << endl;

  Token t2 = Token ('b', 1979);
  cout << "t2.kind is " << t2.kind << " and t2.value is " << t2.value << endl;
 
  return 0;
}
