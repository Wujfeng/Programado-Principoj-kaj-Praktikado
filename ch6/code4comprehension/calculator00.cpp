// Copied from Stroustrup's official website.
//
// This is example code from Chapter 6.6 "Trying the first version" of
// "Software - Principles and Practice using C++" by Bjarne Stroustrup
//

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

/*

 1. Token is a user-defined type or a class.
 2. It is made of two fundamental types, char and double, and two constructs.
 3. The first construct makes a Token from a char and the second uses a char
    and a double as raw material.
 4. In the second case, a double is the argument. The construct uses '8' (for
   reasons known only to Bjarne Stroustrup ~_^) as a char (kind) to create
   a Token.

*/

class Token {
public:
    char kind;        // what kind of token
    double value;     // for numbers: a value
    Token(char ch)    // make a Token from a char
        :kind(ch), value(0) { }
    Token(char ch, double val)     // make a Token from a char and a double
        :kind(ch), value(val) { }
};

//------------------------------------------------------------------------------

/*

  1. Token_stream is a class with three constructs:
    - Token_stream();
    - Token get();
    - void putback (Token t);
  2. Token_stream() reads from cin.
  3. get() reads from Token_stream() and returns a Token.
  4. putback (Token t) inserts a Token back into Token_stream.
  5. To function properly, the constructs rely on a boolean variable « full »
      and a Token « buffer. »

*/

class Token_stream {
public:
    Token_stream();
    Token get();
    void putback (Token t);
private:
    bool full = false;
    Token buffer;
};

//------------------------------------------------------------------------------

/*

  1. When Token_stream() is called, it sets full to zero and buffer to ?
  2. RANDOM THOUGHT: Is 0 in buffer (0) a char or a double?
  3. RANDOM ANSWEr: Because 0 is not bounded by two single quotes, it's a double.
      C++ converts the double into a char. In ASCII, 0's value is 0. So that
      leaves us with a Token with no kind and zero val.
  4. Token_stream() sets full to zero and empties the buffer, if that's the
      right phrase.

*/

Token_stream::Token_stream()
    :full (false), buffer (0) { }

//------------------------------------------------------------------------------

/*

  1. putback() puts Token t into the buffer and sets full to true.

*/
void Token_stream::putback (Token t) {
  if (full) error ("putback() into a full buffer.");
  buffer = t;
  full = true;
}

//------------------------------------------------------------------------------

/*

  1. get() commences by checking buffer. If there is a Token in the buffer, it
      is returned.
  2. If the buffer happens to be empty, the character ch is analysed.
  3. A Token is created is ch is a char.
  4. But if ch is a double, cin.putback() is called.
  RANDOM THOUGHT: What does cin.putback() do?
  RANDOM ANSWER: It throws ch back into istream.
  RANDOM THOUGHT: How does the program separate 1 from 12 or 123?
  RANDOM ANSWER: It happens as if by magic. cin works like Token_stream() and
      reads the whole number. How does it do it? Well, it seems I need to wait
      to learn that. (pp. 212, Section 6.8.3 Reading numbers)
  5. With cin.putback(), double chars are read into val.
  6. val is used to create a Token.

*/

// get() produces a Token.
Token Token_stream::get() {
  if (full) {
    full = false;
    return buffer;
  }

  char ch;
  cin >> ch;

  switch (ch) {
    case ';':
    case 'q':
    case '(': case ')': case '+': case '-': case '*': case '/':
      return Token (ch);
    case '.':
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9': {
// cin.putback (ch) is something I don't understand.
      cin.putback (ch);
      double val;
      cin >> val;
      return Token ('8', val);
    }

    default:
      error ("Bad token");
    }
}

//------------------------------------------------------------------------------

/*

  1. ts is an element of class Token_stream.

*/

Token_stream ts;

//------------------------------------------------------------------------------

/*

  1. This piece of code declares expression(). The definition comes later.

*/

double expression();  // read and evaluate a Expression

//------------------------------------------------------------------------------

/*

  1. This piece of code declares term(). The definition comes later.

*/

double term();        // read and evaluate a Term

//------------------------------------------------------------------------------

/*

  1. primary() is a function that returns a double and takes no arguments.
  2. t is a Token. ts is an element of class Token_stream. ts is a construct in
      ts.
  3. Token t stores what is ts.get() returns, which happens to be a Token.
  4. t's kind is analysed.
  5. expression() is called if t.kind happens to be left parenthesis.
  6. In the second case, t.value is returned.
  7. Any other scenario returns an error message.

  8. Do you what (7) means? It means there is no provision to handle
      mathematical operators. Dio mia!

*/

double primary()     // read and evaluate a Primary
{
    Token t = ts.get();
    switch (t.kind) {
    case '(':       // handle '(' expression ')'
        {
            double d = expression();
            t = ts.get();
            if (t.kind != ')') error("')' expected");
            return d;
        }
    case '8':            // we use '8' to represent a number
        return t.value;  // return the number's value
    default:
        error("primary expected");
    }
}

//------------------------------------------------------------------------------

/*

  1. A double left is declared and initialised with the initial value of
      primary(), which is t.value or double.
  2. ts.get() is invoked and the value it returns is stored in Token t.
  3. true in while (true) executes the code block.
  4. If t.kind happens to be *, t.value is multiplied with left.
  5. If t.kind happens to be /, t.value is divided by d; after checking that
      d is not equal to zero.
  6. The defaul is to return left.

*/

double term()
{
    double left = primary();
    Token t = ts.get();     // get the next token

    while(true) {
        switch (t.kind) {
        case '*':
            left *= primary();
            t = ts.get();
            break;
        case '/':
            {
                double d = primary();
                if (d == 0) error("divide by zero");
                left /= d;
                t = ts.get();
                break;
            }
        default:
            return left;
        }
    }
}

//------------------------------------------------------------------------------

/*

  1. left is a double that stores the double returned by term().
  2. ts.get() returns a Token which is stored into t.
  3. 

*/

double expression()
{
    double left = term();      // read and evaluate a Term
    Token t = ts.get();        // get the next token
    while(true) {
        switch(t.kind) {
        case '+':
            left += term();    // evaluate Term and add
            t = ts.get();;
            break;
        case '-':
            left -= term();    // evaluate Term and subtract
            t = ts.get();
            break;
        default:
            ts.putback(t);
            return left;       // finally: no more + or -: return the answer
        }
    }
}

//------------------------------------------------------------------------------

int main()
try {
    double val = 0;
    while (cin) {
      Token t = ts.get();
      if (t.kind == 'q') break;
      if (t.kind = ';')
        cout << "= " << expression() << '\n';
      else
        ts.putback(t);
      val = expression();
    }
}
catch (exception& e) {
    cerr << e.what() << endl;
    return 1;
}
catch (...) {
    cerr << "exception \n";
    return 2;
}
