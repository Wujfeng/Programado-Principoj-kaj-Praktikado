// Author: Chetan Anand (verdastelo)
// Description: Kalkuli kiom grandaj estas area1, area2, area3 kaj ratio. Forigu ĉiujn erarojn.
// Description: Kial vi pensas, ke ĉiuj eraroj estas forĵetitaj?
// Solution:  Potential errors
//    1. The input can be negative   2. The input can be a string, a char or a float (wrong type)     3. area3 can be zero

#include "std_lib_facilities.h"

int area (int length, int width) 
{
    if ((length < 3) or (width < 3)) 
        error ("non-positive area() argument"); 
    return length * width; 
} 

int framed_area (int x, int y) 
{
        return area (x - 2, y - 2); 
} 

int main()
{
    int x = 4; 
    int y = 8; 
    int z = 10; 
    
    int area1 = area (x, y); 
    int area2 = framed_area (10, z); 
    int area3 = framed_area (y, z); 
    
    double ratio = double (area1) / area3; 
    
    cout << "area1 = " << area1 << '\n'; 
    cout << "area2 = " << area2 << '\n'; 
    cout << "area3 = " << area3 << '\n'; 
    cout << "ratio = " << ratio << '\n'; 
    
    return 0; 
} 
