/*
    For some reason, my system reduces the long double figures to
    four significant digits when it prints the numbers.
    
    However, just because it does not print does not mean it 
    does not calculate. The system can tell apart 10.00000001 from
    10.00000002. 
*/

#include <iostream> 
#include <cmath> 

using namespace std; 

int main()
{
    cout << "Enter two numbers: " << endl;
    long double i, j; 
    while (cin >> i >> j) {
        cout << i << ' ' << j << endl;
        
    // diff stores the difference in magnitute between i and j.
    // diff will be later used in the second else_if test
    // if (diff < almost_equal) 
    // to see if the numbers differ by less than a million
    
    double diff;
    long double almost_equal;
    almost_equal = (1.0/10000000);    
    diff = abs(i-j); 
    
    // now you see why diff was declared at the start of the loop.
    if (diff < almost_equal) {
        cout << "The numbers are almost equal." << endl; 
        }  
    
    if (i < j) {
        cout << "The smaller value is " << i
             << " and the larger value is " << j << endl; 
        }
        
    else if (i > j) {
        cout << "The smaller value is " << j
             << " and the larger value is " << i << endl;
         }
     
    else if (i == j ) { 
        cout << "The numbers are equal." << endl;  
        }
    }
    return 0;
} 
