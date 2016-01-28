/*
    Implement square() without using the multiplication operator.  
*/

#include <iostream> 

int square (int x) 
{
    int j = 0; 
    for (int i = 0; i < x; i++) {
        j += x; 
        }
    return j;
}

int main()
{
    std::cout << "square('a') = " << square('a') << '\n';
    std::cout << "square(97) = " << square(97) << '\n';
    return 0;
} 
