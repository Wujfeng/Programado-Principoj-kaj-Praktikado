// get_token.cpp
// Study get_token()'s implementation in calculator00.cpp
// verdastelo
// 2016-10-24

#include "std_lib_facilities.h"

int main()
try {
  char c;
  if (!(cin >> c)) error ("This isn't a char.");
  switch (c) {
    case '1': case '2': case '3': case '4': case '5':
    case '6': case '7': case '8': case '9': case '0':
    case 'a': case 'b': case 'c': case 'd': case 'e':
      {
        cin.putback(c);
        double val;
        if (!(cin >> val)) error ("Val couldn't be read.");
        cout << val << endl;
        return val; 
       }
    default: 
        error ("Enter a digit. Chars other than digits are incorrect input."); 
  } 
  return 0;
}

catch (exception& e) {
  cerr << "Error: " << e.what() << '\n';
  return 1;
}

catch (...) {
   cerr << "Error: Something went wrong." << '\n';
   return 2;
}
