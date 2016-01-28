/*
    Create a square() function and see if it works on chars. 
*/

#include <iostream> 

int square (int x) 
{
    return x*x; 
}

int main()
{
    std::cout << "square('a') = " << square('a') << '\n';
    std::cout << "square(97) = " << square(97) << '\n';
    return 0;
} 
