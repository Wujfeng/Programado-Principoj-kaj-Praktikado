/*
    THIS PROGRAM IS UNSOLVED. Feb. 10. 07:16.
    To be tried again in evening.
    Find all the prime numbers between 1 and 100.
    Store the primes in a vector.
*/

#include <iostream> 
#include <vector> 

using namespace std; 

int main()
{
    vector <int> primes;
    
    primes[0] = 2; 
    primes[1] = 3; 
    primes[2] = 5;
    primes[3] = 7;
    
    
    for (int number = 2; number < 100; number++) {
        for (int i = 2; i < primes.size(); i++) {
            if (number / primes[i]) {
                primes.push_back(number); 
                } 
         }
    } 
    
    for (int i = 2; i < primes.size(); i++) {
        cout << primes[i] << '\n';
        }
        
    return 0;
}
