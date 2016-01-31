/*
    This program stores all the numbers you will enter in its memory 
    and on each step tells you the smallest and the largest number
    entered so far. 
*/

#include <iostream> 
#include <cmath> 
#include <vector> 
#include <algorithm> 

using namespace std; 

int main()

{
    vector <double> numbers; 
    cout << "Enter a number: " << endl;
    double i {0.0}; 
    while (cin >> i) {

        numbers.push_back(i); 
        if (numbers.size() == 1) {
            cout << "You have entered " << i << '\n'
                 << "Insufficient data.\n"
                 << "You need to enter at least two numbers "
                 << "for comparison.\n";
                 }
        else if (numbers.size() > 1) {
            cout << "You have entered " << i << '\n';
            double smallest {0.0}; 
            double largest {0.0}; 
            sort (numbers.begin(), numbers.end());
            smallest = numbers[0]; 
            largest = numbers[numbers.size()-1]; 
            if (i == smallest) {
                cout << "The smallest number entered so far is " 
                << smallest << '\n'; 
                }
            if (i == largest) {
                cout << "The largest number entered so far is " 
                << largest << '\n'; 
                }
            }
    }
    return 0;
} 
