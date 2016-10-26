// calculator00.cpp
// Study an elementary version of a calculator designed by Bjarne Stroustrup.
// Bjarne Stroustrup (Modifications: verdastelo)
// 2016-10-24

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------
// This part declares and defines the class Token.
// A token is made of two fundamental kinds, char and double.

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
// get_token() reads one char at a time and stores the chars in cin.
// The stored chars are then converted into Tokens.
// chars with only digits and a dot are converted into Tokens (ch, double).
// chars with only other chars are converted into Tokens (ch).  

Token get_token()    // read a token from cin
{
    char ch;
    cin >> ch;    // note that >> skips whitespace (space, newline, tab, etc.)

    switch (ch) {
 //not yet   case ';':    // for "print"
 //not yet   case 'q':    // for "quit"
    case '(': case ')': case '+': case '-': case '*': case '/': 
        return Token(ch);        // let each character represent itself
    case '.':
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
        {    
            cin.putback(ch);         // put digit back into the input stream
            double val;
            cin >> val;              // read a floating-point number
            return Token('8',val);   // let '8' represent "a number"
        }
    default:
        error("Bad token");
    }
}

//------------------------------------------------------------------------------
// This is a declaration.

double expression();  // read and evaluate a Expression

//------------------------------------------------------------------------------
// This is a term() declaration.

double term();        // read and evaluate a Term

//------------------------------------------------------------------------------
// This is primary's definition.

double primary()     // read and evaluate a Primary
{
    Token t = get_token();
    switch (t.kind) {
    case '(':    // handle '(' expression ')'
        {    
            double d = expression();
            t = get_token();
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

int main()
try {
    while (cin)
        cout << "> " << expression() << '\n';
}
catch (exception& e) {
    cerr << e.what() << endl;
    return 1;
}
catch (...) {
    cerr << "exception \n";
    return 2;
}

//------------------------------------------------------------------------------

double expression()
{
    double left = term();      // read and evaluate a Term
    Token t = get_token();     // get the next token
    while(true) {    
        switch(t.kind) {
        case '+':
            left += term();    // evaluate Term and add
            t = get_token();
            break;
        case '-':
            left -= term();    // evaluate Term and subtract
            t = get_token();
            break;
        default:
            return left;       // finally: no more + or -: return the answer
        }
    }
}

//------------------------------------------------------------------------------

double term()
{
    double left = primary();
    Token t = get_token();     // get the next token

    while(true) {
        switch (t.kind) {
        case '*':
            left *= primary();
            t = get_token();
            break;
        case '/':
            {    
                double d = primary();
                if (d == 0) error("divide by zero");
                left /= d; 
                t = get_token();
                break;
            }
        default: 
            return left;
        }
    }
}

//------------------------------------------------------------------------------
