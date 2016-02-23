#include <iostream> 

using namespace std; 

int area (int length, int width)
{
    return length * width; 
}

int main()
{
    // int x0 = arena(7); // arena() was not declared in this scope
    // int x1 = area(7); // too few arguments to function int area (int, int) 
    // int x2 = area ("seven", 2); // invalid conversion from const char* to int
    char x = area (10000, 9999); 
    cout << x << '\n';
    return 0;
}
