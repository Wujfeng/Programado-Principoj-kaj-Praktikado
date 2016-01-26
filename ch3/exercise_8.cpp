/*
    This program figures out if a given number is even or odd.
*/ 

/*
    What will happen if someone were to enter a float? 
    Or a string? Or a character? 
*/

#include <iostream> 

int main() 
{
    int i {0};
    std::cout << "Enter a number: " << std::endl; 
    std::cin >> i; 
    // 0 is neither even nor odd. 
    // The modulus of an odd number is always 1. 
    if ((i != 0) && (i%2==1)) { 
        std::cout << i << " is an odd number." << std::endl; 
        } 
    else 
        std::cout << i << " is an even number." << std::endl; 
    return 0;
} 


