/*
    A simple calculator. 
    Performs addition, substraction, multiplication, division
    and finds modulus.
*/

#include <iostream> 

using namespace std; 

int main()
{
    double value1 = 0.0; 
    double value2 = 0.0; 
    char operation = ' ';
    
    cout << "Enter two numbers followed by the operation you\n"
         << " want to perform on them.\n"
         << "Valid operators are +, -, /, * and %.\n"; 
         
    while (cin >> value1 >> value2 >> operation) {
          int value1_int; 
          int value2_int;
          value1_int = value1; 
          value2_int = value2; 
        switch (operation) {
            case '+':
            cout << "The sum of the numbers is " 
                 << value1 + value2 << endl; 
             break; 
             
             case '-':
             if (value1 > value2) {
                cout << "The difference of the numbers is "
                     << value1 - value2 << endl; 
                 }
              else 
                 cout << "The difference of the numbers is " 
                      << value2 - value1 << endl; 
              break; 
              
              case '*': 
              cout << "The result of the multiplication of "
                   << value1 << " and " << value2 << " is " 
                   << value1*value2 << endl; 
              break; 
              
              case '/':
              if ((value1 < value2) && (value1 != 0)) {
                cout << "Dividing " << value2 << " by " 
                     << value1 << " produces " << value2/value1
                     << endl; 
                     }
                     
               if ((value1 > value2) && (value2 != 0)) {
                 cout << "Dividing " << value1 << " by " 
                      << value2 << " produces " << value1/value2
                      << endl; 
                      }
               break; 
               
               case '%':
               if (value1 < value2)
                 cout << value2 << " divided by " << value1 
                      << " produces a remainder of " 
                      << value2_int%value1_int
                      << endl; 
                      
                if (value2 < value1) 
                    cout << value1 << " divided by " << value2 
                      << " produces a remainder of " 
                      << value1_int%value2_int
                      << endl; 
                      
                 break; 
                 
                 default: 
                 cout << "Please enter a valid input.\n"; 
                 break; 
        }
 
        }
        
        return 0; 
} 
    
     
