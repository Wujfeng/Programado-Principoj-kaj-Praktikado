#include "std_lib_facilities.h" 

using namespace std; 

int area (int length, int width) 
{
    return length * width; 
} 

int framed_area (int x, int y) 
{
    return area (x - 2, y - 2);
} 

int main()
{
    int x = -1; 
    int y = 2; 
    int z = 4; 
    
    int area1 = area (x, y); 
    int area2 = framed_area (1, z); 
    int area3 = framed_area (y, z); 
    
    double ratio = double (area1) / area3; 
    
    cout << "area1 = " << area1 << '\n'; 
    cout << "area2 = " << area2 << '\n'; 
    cout << "area3 = " << area3 << '\n'; 
    cout << "ratio = " << ratio << '\n'; 
    
    return 0; 
} 
