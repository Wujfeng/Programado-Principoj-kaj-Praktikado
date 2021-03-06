/*
 * This program solves quadratic equations in the form
 * ax^2 + bx + c = 0.
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    double a;
    double b;
    double c;
    string x;
    double x1; // first value of x
    double x2; // second value of x

    cout << "Enter your quadratic equation: \n";
    cout << "Exponent for x^2: ";
    cin >> a;
    //cout << '\n';
    cout << "Exponent for x: ";
    cin >> b;
    //cout << '\n';
    cout << "The constant: ";
    cin >> c;
    //cout << '\n';
    cout << "Your quadratic equation is: "
            << a << "x^2 +" << b << "x +" << c;
    cout << '\n';
    
    double discrement; 
    //cout << pow(b, 2) << '\n'; 
    discrement = pow(b, 2) - (4*a*c); 
    //cout << "discrement = " << discrement << '\n'; 
    double disc; 
    disc = sqrt (discrement); 
    //cout << "disc = " << disc << '\n'; 
    //cout << -b << endl; 
    x1 = (-b + disc) / (2*a);
    x2 = (-b - disc) / (2*a);

    cout << "The solution is: "
            << x1 << " and " << x2 << endl;

    return 0;
}
