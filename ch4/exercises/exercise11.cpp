/*
    Find all the prime numbers between 1 and 100.
    Store the primes in a vector.
*/

/*
    Strategy: 
    1. Check if a number is even or odd. 
    2. If it is even, it cannot be prime.
    3. Move to the next number. Repeat step 1. 
    4. If it is odd, divide it by the first prime number in your list.
    5. If it divides (the modulus is zero), move to the next number and
    repeat step 1. 
    6. If the modulus is not zero, divide the number by the next prime
    number in the list. Follow step 5 if the modulus is zero and step 
    6 if the modulus is non-zero.
    7. Repeat step 6 until the list of prime numbers is exhausted. 
    8. Add the number to the prime numbers' list if the modulus remains
    non-zero. 
    9. Move to step 1. 
*/

#include <iostream> 
#include <vector> 

using namespace std; 

int main()
{
    // A list of primes. 
    vector <int> primes;
    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(5);
    
    int n = 6; 
    
    // As long as n is less than 100.
    while (n < 100) { 
    // Find out if n is even or odd. 
        if ((n % 2) == 0) { 
    // If it's even, increment is by 1 and 
    // check if it is still less than 100. 
            n++;       
            } 
    // If it's odd. 
       else 
    // Divide it by the first prime number in your list.
       int prime_div_mod; // prime division modulus 
       prime_div_mod = (n % primes[0]); 
    // If it's a perfect division (mod == 0), increment n by 1 and
    // check if n is still less than 100. 
       if (prime_div_mod == 0) {
           n++; 
           }
     // If the modulus is not 0, divide n by the next
     // prime number in the list. 
        prime_div_mod = (n % primes[1]); 
         
       else  
    return 0;
}
