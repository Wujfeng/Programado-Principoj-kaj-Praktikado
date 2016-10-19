#include <iostream> 
#include <string> 
#include <vector> 

using namespace std;

int main()
{
    vector <string> philosophers (4);
    philosophers [0] = "안진심";
    philosophers [1] = "東京タワー";
    philosophers [2] = "Достоевский, Фёдор";
    philosophers [3] = "ਗੁਰਦਿਆਲ ਸਿੰਘ";
    
    
    for (int i = 0; i < 4; i++) {
        cout << i+1 << " " << philosophers [i] << endl; 
        }
    
    return 0;
    
} 

