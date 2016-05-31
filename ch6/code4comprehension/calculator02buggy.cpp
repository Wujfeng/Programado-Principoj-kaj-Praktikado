//
// This is example code from Chapter 6.7 "Trying the second version" of
// "Software - Principles and Practice using C++" by Bjarne Stroustrup
//

/*
	This file is known as calculator02buggy.cpp

	I have inserted 5 errors that should cause this not to compile
	I have inserted 3 logic errors that should cause the program to give wrong results

	First try to find an remove the bugs without looking in the book.
	If that gets tedious, compare the code to that in the book (or posted source code)

	Happy hunting!

*/

/*

	1. Drill 1: ਪ੍ਰੋਗ੍ਰਾਮ ਹੁਣ ਕੰਪਾਈਲ ਕਰਦਾ ਹੈ।
	2. Drill 2: q ਦੀ ਥਾਂ ਹੁਣ x ਦੱਬਣ ਨਾਲ ਪ੍ਰੋਗ੍ਰਾਮ ਕਵਿਟ ਕਰ ਜਾਂਦਾ ਹੈ।
	3. Drill 3: ; ਦੀ ਜਗ੍ਹਾ ਹੁਣ = ਐਨਟਰ ਕਰਨ ਨਾਲ ਰਿਜ਼ਲਟ ਦਿਖ ਜਾਂਦਾ ਹੈ।
	4. Drill 4: ਇੱਕ ਗ੍ਰੀਟਿੰਗ ਐਡ ਕੀਤੀ।
	5. Drill 5: ਚਾਰ ਲਾਈਨਾ ਲਿੱਖਿਆਂ ਜੋ ਕਿ ਕਿਸੇ ਯੂਜ਼ਰ ਨੂੰ ਪ੍ਰੋਗ੍ਰਾਮ ਕਿਵੇੇਂ ਵਰਤਣਾ ਹੈ ਇਹ
                     ਸਮਝਣ ਵਿਚ ਮਦਦ ਕਰਦੀਆਂ ਹਲ. 

*/

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

class Token {	      // lass ਨੂੰ class ਵਿਚ ਬਦਲਿਆ।
public:
    char kind;        // what kind of token
    double value;     // for numbers: a value
    Token(char ch)    // make a Token from a char
        :kind(ch), value(0) { }
    Token(char ch, double val)     // make a Token from a char and a double
        :kind(ch), value(val) { }
};

//------------------------------------------------------------------------------

class Token_stream {
public:
    Token_stream();   // make a Token_stream that reads from cin
    Token get();      // get a Token (get() is defined elsewhere)
    void putback(Token t);    // put a Token back
private:
    bool full;        // is there a Token in the buffer?
    Token buffer;     // here is where we keep a Token put back using putback()
};

//------------------------------------------------------------------------------

// The constructor just sets full to indicate that the buffer is empty:
// Ч: Buffer is a Token and «full» is a boolean variable.
// Ч: A false «full» indicates the absence of a Token. So no buffer (which is a Token)
// Ч: is created.
Token_stream::Token_stream()
    : full(false), buffer(0) { }    // no Token in buffer

//------------------------------------------------------------------------------

// The putback() member function puts its argument back into the Token_stream's buffer:
// Ч: The argument is a Token, namely «t» in the following function definition.
// Ч: If «full» is true, an error is thrown.
// Ч: Else, Token t's value is stored into «buffer».
// Ч: Then «full» is set to true, which breaks the loop (is this the correct word?).
void Token_stream::putback(Token t)
{
    if (full) error("putback() into a full buffer");
    buffer = t;       // copy t to buffer
    full = true;      // buffer is now full
}

//------------------------------------------------------------------------------

Token Token_stream::get()  // get() ਨੂੰ Token_stream class ਦਾ ਹਿੱਸਾ ਬਣਾਇਆ।
{
    if (full) {       // do we already have a Token ready?
        // remove token from buffer // Ч: by setting full to false.
        full=false;
        return buffer;
    }

    char ch;
    cin >> ch;    // note that >> skips whitespace (space, newline, tab, etc.)

    switch (ch) {
    case '=':    // for "print"
    case 'x':    // for "quit"
    case '(': case ')': case '+': case '-': case '*': case '/':
        return Token(ch);        // let each character represent itself
    case '.':
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9': // case '8': ਮੀਸੀੰਗ ਸੀ।
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

Token_stream ts;        // provides get() and putback()

//------------------------------------------------------------------------------

double expression();    // declaration so that primary() can call expression()

//------------------------------------------------------------------------------

double term();		// Ч: Inserted this declaration.

//------------------------------------------------------------------------------

// deal with numbers and parentheses
double primary()
{
    Token t = ts.get();
    switch (t.kind) {
    case '(':    // handle '(' expression ')'
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

// deal with *, /, and %
double term()
{
    double left = primary();
    Token t = ts.get();        // get the next token from token stream

    while(true) {
        switch (t.kind) {
        case '*':
            left *= primary();
            t = ts.get();
            // SECOND LOGICAL ERROR: There was no break statement here. Inserted it.
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
            ts.putback(t);     // put t back into the token stream
            return left;
        }
    }
}

//------------------------------------------------------------------------------

// deal with + and -
double expression()
{
    double left = term();      // read and evaluate a Term Ч: Corrected a syntax error.
    Token t = ts.get();        // get the next token from token stream

    while(true) {
        switch(t.kind) {
        case '+':
            left += term();    // evaluate Term and add
            t = ts.get();
            break;
        case '-':
            // First logical error. The program doesn't substract.
            // left += term();    // evaluate Term and subtract
            // Debugged line of code.
            left -= term();
            t = ts.get();
            break;
        default:
            ts.putback(t);     // put t back into the token stream
            return left;       // finally: no more + or -: return the answer
        }
    }
}

//------------------------------------------------------------------------------

int main()
try
{
    // ਇੱਕ ਗ੍ਰੀਟਿੰਗ ਐਡ ਕੀਤੀ।

    cout << "Welcome to our calculator." << endl;
    cout << "Please enter expressions using float point numbers." << endl;
    cout << "This program can perform the operations of addition, substraction, multiplication and divisions on two or more than two operands." << endl;
    cout << "Enter your expressions and end them in = (equals sign)." << endl;
    cout << "An simple expression looks like this: 2+3" << endl;
    cout << "A more complicated expression may have this shape: 2+(100-2)*3/4" << endl;
    cout << endl;
    cout << endl;
    double val = 0;		  // val ਨੂੰ ਡਿਕਲੇਅਰ ਅਤੇ ਇਨੀਸ਼ੀਅਲਾਈਜ਼ ਕੀਤਾ।
    while (cin) {
        cout << "> "; 
        Token t = ts.get();

        if (t.kind == 'x') break; // 'q' for quit
        if (t.kind == '=') {        // ';' for "print now"
            cout << val << '\n';
        }
        else {
            ts.putback(t);
        }
        val = expression();
    }
}

catch (exception& e) {
    cerr << "error: " << e.what() << '\n';
    return 1;
}

catch (...) {
    cerr << "Oops: unknown exception!\n";
    return 2;
}

//------------------------------------------------------------------------------
