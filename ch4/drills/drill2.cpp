#include <iostream> 

using namespace std; 

int main()
{
    cout << "Enter two numbers: " << endl; 
    int i, j; 
    while (cin >> i >> j) {
        cout << i << ' ' << j << endl;
    // seo estas aldonita al drill1.cpp
    // por kalkuli larĝa kaj mallarĝa nombroj.     
    if (i < j) {
        cout << "The smaller value is " << i
             << " and the larger value is " << j << endl; 
        }
    else
        cout << "The smaller value is " << j
             << " and the larger value is " << i << endl; 
      } 
    return 0;
} 
