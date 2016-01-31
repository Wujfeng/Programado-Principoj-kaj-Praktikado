/*
    Hurrah! Now drill7.cpp and drill8.cpp seem like the easiest
    things in the world.
*/

#include <iostream> 
#include <cmath> 
#include <vector> 
#include <algorithm> 
#include <string> 

using namespace std; 

int main()

{
    vector <double> numbers; 
    cout << "Enter a number: " << endl;
    double i {0.0};
    string unit; 
    while (cin >> i >> unit) {
    
        if (unit == "cm" ||
            unit == "m" ||
            unit == "ft" || 
            unit == "in") {

            numbers.push_back(i);
            
            if (numbers.size() == 1) {
                cout << "You have entered " << i << unit << '\n'
                     << "Insufficient data.\n"
                     << "You need to enter at least two numbers "
                     << "for comparison.\n";
                     }
                     
            else if (numbers.size() > 1) {
                cout << "You have entered " << i << unit << '\n';
                double smallest {0.0}; 
                double largest {0.0}; 
                sort (numbers.begin(), numbers.end());
                smallest = numbers[0]; 
                largest = numbers[numbers.size()-1]; 
                if (i == smallest) {
                    cout << "The smallest number entered so far is " 
                    << smallest << unit << '\n'; 
                    }
                if (i == largest) {
                    cout << "The largest number entered so far is " 
                    << largest << unit << '\n'; 
                    }
                }
          }
        else 
            cout << "Please enter a valid unit.\n"
                 << "Only meters (m), centimeters (cm), feet (ft) and inches (in) are accepted.\n"; 
    }
    return 0;
} 
