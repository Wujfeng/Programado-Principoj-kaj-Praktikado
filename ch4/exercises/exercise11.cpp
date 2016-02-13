/*
    Find all the prime numbers between 1 and 100.
    Store the primes in a vector.
*/

#include <iostream> 
#include <vector> 

using namespace std; 

int main()
{
    // A way to find out if a number is prime or not is to divide 
    // it by all known primes that come before it or are smaller
    // than it.
    
    // I am going to start out with three known primes. 
    
    vector <int> primes; 
    
    primes[0] = 2; 
    primes[1] = 3; 
    primes[2] = 5; 
    
    // Now I am going to loop the numbers from 1 to 100. 
    // Any number divisible by these three known primes will
    // be ignored. 
    // Any number not divisible by these three known primes 
    // will be added to the list of known primes. 
    // The process will repeat itself until a prime number 
    // equal to or greater than zero is not found. 
    
    
    for (int i = 2; i < 100; i++) {
        for (int j = 0; j < primes.size(); primes[j++]) {
            if (i / primes[j]) {
            }
            else 
                primes.push_back[i];
            } 
        } 
        
     return 0;
}
