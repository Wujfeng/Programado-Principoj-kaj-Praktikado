/*
    Starting number (min): 2
    Ending number (max): 100 or user defined
    All these numbers will be stored in a vector
    All multiples of 2 will removed. 
    All multiples of 2 will be removed. 
    All multiples of the next number will be removed. 
    The process will continue until the program hits max/2. 
    The the remaining numbers in the original vector will be published.
*/

#include <iostream> 
#include <vector> 
#include <algorithm> 

using namespace std; 

int sieve_of_eratosthenes (int max)
{
    // Being the first prime number, 2 is a const. 
    // Users define max. 
    
    int min = 2; 
    cout << "min is " << min << '\n';
    cout << "max is " << max << '\n';
    
    // Create a vector and store all the numbers between min
    // and max in that vector.
    
    vector <int> number_storage; 
    
    for (int i = min; i <= max; i++) {
        number_storage.push_back (i); 
        }
    
    // Testing. Publish all the numbers in number_storage.    
    for (int n = 0; n < number_storage.size(); n++) {
        cout << number_storage [n] << ' ';
        }
        
} 

int main()

{
     int max; 
     cout << "Enter max: "; 
     cin >> max;  
     sieve_of_eratosthenes (max);
     cout << '\n';
     return 0;
}
