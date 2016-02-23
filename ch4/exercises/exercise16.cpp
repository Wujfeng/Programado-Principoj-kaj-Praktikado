#include <iostream> 
#include <vector> 
#include <algorithm> 

using namespace std; 

int main()
{
    cout << "Enter positive integers: ";
    vector <int> positive_numbers; 
    int positive_number; 
    while (cin >> positive_number) {
        positive_numbers.push_back (positive_number); 
        }
        
    sort (positive_numbers.begin(), positive_numbers.end());
    
    int counter = 1; 
    
    for (int i = 0; i < positive_numbers.size(); i++) {
        if (positive_numbers[i] == positive_numbers[i+1]) {
            counter++;
            }
        }
    
    cout << "Counter is " << counter << '\n';
    cout << "Min is " << positive_numbers[0] << '\n';
    cout << "Max is " << positive_numbers[positive_numbers.size()-1]
         << '\n';
    
    return 0;
} 
