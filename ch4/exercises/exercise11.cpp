/*
    This is an ugly program. 
    But it works! 
*/

#include <iostream> 
#include <cmath> 
#include <vector> 
#include <algorithm> 

// divide n by all the prime numbers
// store the modulus in a vector
// sort the vector 
// if modulus is for the first number, n is not a prime
// if it not, n is a prime 

using namespace std; 

int finds_a_prime(int n)
{
    // A list of first three prime numbers. 
    vector <int> primes; 
    
    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(5);
    
    // A vector for storing the results of the division between
    // a number "n" and the first three prime numbers. 
    vector <double> check_primes; 
    // A number to store the results of the division between
    // a number "n" and the first three prime numbers before
    // the result is transferred to check_primes. 
    double prime_store; 
    
    // n is the number whose primeness has to be checked. 
    
    // If n is even, it cannot be prime. 
    if ((n % 2) == 0) {
        //cout << n << " is not a prime.\n";
        }
    // If n is odd, it will be divided by all the prime numbers
    // in our list and the results will be stored in a vector 
    // check_primes.   
    else 
        {
        for (int i = 0; i < primes.size(); i++) {
            prime_store = (n % primes[i]); 
            check_primes.push_back (prime_store); 
            } 
            
        sort (check_primes.begin(), check_primes.end()); 
        
        if (check_primes[0] == 0) {
            //cout << n << " is not a prime."; 
            }
        else 
            cout << n << " is a prime.";
        }
        cout << '\n';
} 

int main()
{
    for (int i = 5; i < 100; i++) {
        finds_a_prime(i);
        }
        
    return 0;
} 
