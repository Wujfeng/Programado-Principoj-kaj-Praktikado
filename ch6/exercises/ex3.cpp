// ex3.cpp: Четан Ананд
// Описание: Add a factorial operator !. Make it bind tighter than * and /.


#include "std_lib_facilities.h"

class Token {	    // A token is defined.
public:
    char kind;       
    double value;   
    Token(char ch)  
        :kind(ch), value(0) { }
    Token(char ch, double val)     
        :kind(ch), value(val) { }
};

//------------------------------------------------------------------------------

class Token_stream {  
public:
    Token_stream();  
    Token get();    
    void putback(Token t);
private:
    bool full;        
    Token buffer;    
};

//------------------------------------------------------------------------------

Token_stream::Token_stream()       // buffer is a Token. It takes either a char 
    : full(false), buffer(0) { }   // as an argument or a char and a double. 
                                   // Why is there a zero? 

//------------------------------------------------------------------------------

void Token_stream::putback(Token t)    
{
    if (full) error("putback() into a full buffer");
    buffer = t;      
    full = true;    
}

//------------------------------------------------------------------------------

Token Token_stream::get()  // get() Token ਪੜ੍ਹਦਾ ਹੈ।
{
    if (full) {            // ਜੇ buffer ਵਿਚ ਪਹਿਲਾਂ ਤੋਂ ਹੀ Token ਹੈ ਤਾਂ ਇਹ ਕੋਡ ਬਲਾਕ ਐਕਟੀਵੇਟ ਹੋ ਜਾਂਦਾ ਹੈ।
        full=false;        // full ਨੂੰ false ਡਿਕਲੇਅਰ ਕਰਨ ਤੋਂ ਬਾਅਦ
        return buffer;     // buffer ਨੂੰ ਰਿਟਰਨ ਕਰ ਦਿੱਤਾ ਜਾਂਦਾ ਹੈ।
    }

    char ch;
    cin >> ch;    // ਸਪੇਸ, ਨਿਊਲਾਈਨ, ਟੈਬ ਵਗੈਰਾ ਨੂੰ ਇਗਨੋਰ ਕਰ ਦਿੱਤਾ ਜਾਂਦਾ ਹੈ।

    switch (ch) {
    case '=':    // ਪ੍ਰਿੰਟ ਕਰਨ ਲਈ।
    case 'x':    // ਪ੍ਰੋਗ੍ਰਾਮ ਤੋਂ ਬਾਹਰ ਨਿਕਲਣ ਲਈ।
    case '(': case ')': case '{': case '}': case '+': case '-': case '*': case '/':
        return Token(ch);        // ਹਰ ਹਰਫ਼ (char) ਖੁਦ ਨੂੰ ਰੈਪ੍ਰਜ਼ੈਂਟ ਕਰਦਾ ਹੈ।
    case '.':
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
    /*
     *  ਇਹ ਕੋਡ ਬਲਾਕ ਇਸ ਪ੍ਰੋਗਰਾਮ ਦਾ ਸਭ ਤੋਂ ਮੁਸ਼ਕਲ ਹਿੱਸਾ ਹੈ।
     *  ਕਿਤਾਬ ਦੇ ਲਿਖਾਰੀ ਬਯਾਰਨ ਸਟ੍ਰੋਸਟਰੁਪ ਦੇ ਮੁਤਾਬਕ ਅਜੇ ਇਹ ਯਕੀਨ ਕਰਨਾ ਪਵੇਗਾ ਕਿ ਇਹ
     *    ਬਲਾਕ ਕੰਮ ਕਰਦਾ ਹੈ। ਡਿਟੇਲਸ ਲਈ ਅਜੇ ਥੋੜ੍ਹਾ ਚਿਰ ਇੰਤਜ਼ਾਰ ਕਰਨਾ ਪਵੇਗਾ।
    */
        {
            cin.putback(ch);         // ਡਿਜਿਟ ਨੂੰ ਇਨਪੁਟ ਸਟ੍ਰੀਮ ਵਿਚ ਸੁੱਟਦਾ ਹੈ।
            double val;
            cin >> val;              // ਫਲੋਟਿੰਗ ਪੁਵਾਇੰਟ ਨੰਬਰ ਪੜ੍ਹਦਾ ਹੈ।
            return Token('8',val);   // ਇਹ ਮੰਨ ਲੈਂਦੇ ਹਾਂ ਕਿ '8' ਨੰਬਰ ਰੈਪ੍ਰਜ਼ੈੰਟ ਕਰਦਾ ਹੈ।
        }
    default:
        error("Bad token");
    }
}

//------------------------------------------------------------------------------

Token_stream ts;        // get() ਅਤੇ putback() ts ਕਲਾਸ ਦਾ ਹਿੱਸਾ ਬਣਨਗੇ।

//------------------------------------------------------------------------------

double expression();    // expression() ਨੂੰ ਇੱਥੇ ਡਿਕਲੇਅਰ ਕੀਤਾ ਜਾ ਰਿਹਾ ਹੈ ਤਾਂ ਕਿ primary()
                        // ਇਸ ਫੰਕਸ਼ਨ ਨੂੰ ਕਾਲ ਕਰ ਸਕੇ।

//------------------------------------------------------------------------------

double term();		// term() ਨੂੰ ਡਿਕਲੇਅਰ ਕਰਨ ਦਾ ਮਕਸਦ ਇਹ ਪੱਕਾ ਕਰਨਾ ਹੈ ਕਿ primary()
                        // ਅਤੇ expression() ਇਸ ਨੂੰ ਕਾਲ ਕਰ ਸਕਣ।

//------------------------------------------------------------------------------

// ਨੰਬਰਾਂ, ਗੋਲ ਬਰੈਕਟਾਂ ਅਤੇ ਕਰਲੀ ਬਰੈਕਟਾਂ ਨੂੰ ਹੈਂਡਲ ਕਰਦਾ ਹੈ।
double primary()
{
    Token t = ts.get();
    switch (t.kind) {
    case '{':
        {
            double i = expression();
            t = ts.get();
            if (t.kind != '}') error ("'}' expected");
            return i;
        }
    case '(':
        {
            double d = expression();
            t = ts.get();
            if (t.kind != ')') error("')' expected");
            return d;
        }
    case '8':
        return t.value;
    default:
        error("primary expected");
    }
}

//------------------------------------------------------------------------------

// *, / ਅਤੇ % ਨੂੰ ਹੈਂਡਲ ਕਰਦਾ ਹੈ।
double term()
{
    double left = primary();
    Token t = ts.get();        // Token_stream ਤੋਂ ਅਗਲਾ Token ਪੜ੍ਹੋ।

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
            ts.putback(t);     // t ਨੂੰ ਮੁੜ Token_stream ਵਿਚ ਪਾਓ।
            return left;
        }
    }
}

//------------------------------------------------------------------------------

// + ਅਤੇ - ਨੂੰ ਹੈਂਡਲ ਕਰਦਾ ਹੈ।
double expression()
{
    double left = term();      // term ਨੂੰ ਪੜ੍ਹਨਾ ਅਤੇ ਇਵੈਲਯੂਏਟ ਕਰਨਾ ਹੈ।
    Token t = ts.get();        // Token_stream ਤੋਂ ਅਗਲਾ Token ਪੜ੍ਹੋ।

    while(true) {
        switch(t.kind) {
        case '+':
            left += term();    // Term ਨੂੰ ਇਵੈਲਯੂਏਟ ਕਰਕੇ left ਵਿਚ ਐਡ ਕਰੋ।
            t = ts.get();
            break;
        case '-':
            left -= term();
            t = ts.get();
            break;
        default:
            ts.putback(t);     // t ਨੂੰ ਮੁੜ Token_stream ਵਿਚ ਪਾਓ।
            return left;       // ਜਦੋਂ + ਜਾਂ - ਮਿਲਣੇ ਬੰਦ ਹੋ ਜਾਣ ਤਾ left ਨੂੰ ਰਿਟਰਨ ਕਰ ਦੇਵੋ।
        }
    }
}

//------------------------------------------------------------------------------

int main()
try
{

    cout << "ਇਹ ਇੱਕ ਕੈਲਕਯੂਲੇਟਰ ਹੈ ਜੋ +, -, * ਅਤੇ / ਕਰਦਾ ਹੈ। " << endl;
    cout << "ਕਰਲੀ ({}) ਅਤੇ ਬਰੈਕਟਾਂ (()) ਨੂੰ ਸਮਝਦਾ ਹੈ। " << endl;
    cout << "ਆਪਣੀ ਇਕਸਪ੍ਰੈਸ਼ਨ ਲਿਖੋ ਅਤੇ = ਦਬਾਓ। " << endl;
    cout << "ਸਿੰਪਲ ਇਕਸਪ੍ਰੈਸ਼ਨ ਇੰਝ ਦੀ ਦਿਖਦੀ ਹੈ: 2+3" << endl;
    cout << "ਮੁਸ਼ਕਲ ਇਕਸਪ੍ਰੈਸ਼ਨ ਦਾ ਰੂਪ ਕੁਝ ਅਜਿਹਾ ਹੋ ਸਕਦਾ ਹੈ: 2+(100-2)*3/4" << endl;
    cout << endl;
    cout << endl;
    double val = 0;		  // val ਨੂੰ ਡਿਕਲੇਅਰ ਅਤੇ ਇਨੀਸ਼ੀਅਲਾਈਜ਼ ਕੀਤਾ।
    while (cin) {
        cout << "> "; 
        Token t = ts.get();

        if (t.kind == 'x') break; // 'x' ਪ੍ਰੋਗਰਾਮ ਵਿਚੋਂ ਬਾਹਰ ਨਿਕਲਣ ਲਈ।
        if (t.kind == '=') {        // '=' ਆਨਸਲ ਪ੍ਰਿੰਟ ਕਰਨ ਲਈ।
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

