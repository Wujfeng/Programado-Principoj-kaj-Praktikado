/*
    A primitive, command-line calculator.
*/

#include <iostream> 
#include <string> 

int main()
{
    std::cout << "Enter an operation followed by two operands: "; 
    std::string operation; 
    double num1, num2; 
    std::cin >> operation >> num1 >> num2; 
    
    if ((operation == "+") || (operation == "plus")) {
        std::cout << "The sum of the numbers is: " << num1+num2; 
        std::cout << '\n';
        }
        
    else if (operation == ("-") || (operation == ("minus"))) {
        if (num1 > num2) {
             std::cout << "The difference of the numbers is: " << num1-num2;
             std::cout << '\n';
        }
        else 
            std::cout << "The difference of the numbers is: " << num2-num1;
            std::cout << '\n';
        }
        
    else if (operation == ("*") || (operation == "mul")) {
        std::cout << "The product of the numbers is: " << num1*num2; 
        std::cout << '\n'; 
        }
        
    else if (operation == "/" || (operation == "div")) {
        if (num2 != 0) {
            std::cout << num1 << " divided by " << num2 << " is " 
                  << num1/num2; 
            std::cout << '\n';
        }
        else 
            std::cout << "Nice try, buddy! But I don't divide by zero." << std::endl; 
        }
        
    else 
        std::cout << "Please enter a comprehensible input.\n";
    
    return 0;
}
