/*
    A program that converts yen, euros and pounds into dollars.
    This time, a switch statement will be used instead of an if-else
    structure. 
*/

#include <iostream> 

int main()
{
    std::cout << "This program converts yen, euros and pounds into" 
              << " the U.S. dollars. " 
              << "The exchange rate was last checked on Jan. 26,"
              << " 2016 at 13:43 (IST).\n"; 
    
    std::cout << "Do you have yens, euros or pounds?\n"
              << "Press 'y' for yens\n"
              << "Press 'e' for euros\n"
              << "Press 'p' for pounds\n";
              
    char c; // currency's name
    double jValue, eValue, pValue, usValue; // currency's value 
    
    std::cin >> c; 
    
    switch (c) {
    
    case 'y':
        std::cout << "Thank you, we will now convert yens into"
                  << " the U.S. dollars. " 
                  << "How many yens do you have? "; 
        std::cin >> jValue; 
        usValue = 10 * jValue;
        std::cout << "You own $" << usValue << '\n';
        break; 
                
    case 'e':
        std::cout << "Thank you, we will now convert euros into"
                  << " the U.S. dollars. " 
                  << "How many euros do you have? "; 
        std::cin >> eValue; 
        usValue = 10 * eValue;
        std::cout << "You own $" << usValue << '\n';
        break; 
        
    case 'p':
        std::cout << "Thank you, we will now convert pounds into"
                  << " the U.S. dollars. " 
                  << "How many pounds do you have? "; 
        std::cin >> pValue; 
        usValue = 10 * pValue;
        std::cout << "You own $" << usValue << '\n';
        break; 
        
    default: 
        std::cout << "Please enter a valid input.\n"
                  << "Currently, we operate in only four currencies.\n";
        break; 
     
     }
                  
     return 0;
} 
