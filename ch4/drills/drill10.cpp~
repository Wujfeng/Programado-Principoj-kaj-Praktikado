/*
    I am off to drill9.cpp. 
    Allah, you are so benevolent.
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
    double d {0.0}; 
    string unit; 
    
    while (cin >> d >> unit) {
    
        if (unit == "cm" ||
            unit == "m" ||
            unit == "ft" || 
            unit == "in") {
            
            if (unit == "cm") {
                i = d/100; 
                }
                
            if (unit == "m") {
                i = d; 
                }
                
            if (unit == "in") {
                i = d/39.37;
                }
                
            if (unit == "ft") {
                i = d/3.28;
                }
                
            numbers.push_back(i); 
            
         }
            
        else 
            cout << "Please enter a valid unit.\n"
                 << "Only meters (m), centimeters (cm), feet (ft) and inches (in) are accepted.\n";
                 
    }
    
    double sum {0.0}; 
    
    for (int j = 0; j < numbers.size(); j++) {
        sum += numbers[j]; 
        }
        
    double smallest {0.0}; 
    double largest {0.0}; 
    sort (numbers.begin(), numbers.end());
    smallest = numbers[0]; 
    largest = numbers[numbers.size()-1]; 
                
    cout << numbers.size() << " numbers have been entered so far.\n"; 
    
    cout << "The smallest number entered so far is " 
         << smallest << "m\n"; 
         
    cout << "The largest number entered so far is " 
         << largest << "m\n"; 
         
    cout << "The sum of the numbers entered so far is " 
         << sum << "m\n"; 
    
    for (int j = 0; j < numbers.size(); j++) {
        cout << numbers[j] << ' ';
        }
    
    cout << '\n'; 
    
    return 0;
}
