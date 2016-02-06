/*
    Fix the program 4.6.2 so that it works on odd and even 
    number of inputs.
*/

#include <iostream> 
#include <vector> 
#include <algorithm> 

using namespace std; 

int main() 
{
    cout << "Enter temperature values: \n";
    cout << "Any non-digit entry will terminate the input and "
         << "display you the median of the all values entered " 
         << "previously.\n";  
    vector <double> temps; // temperatures
    double temp; 
    while (cin >> temp) // read
        temps.push_back(temp); 
        
    // compute median temperature 
    sort (temps.begin(), temps.end()); 
    
    // median if an even number of temperature data values are stored 
    if ((temps.size()/2) != 1) {
        double value1; 
        double value2; 
        
        value1 = temps[temps.size()/2]; 
        value2 = temps[(temps.size()/2)-1]; 
        
        cout << "Median temperature: " << (value1+value2)/2 << endl; 
        }
    // median if an odd number of temperature data values are stored  
    else
        cout << "Median temperature: " << temps[temps.size()/2] << endl;
    
    return 0;
} 
