/*
    A vector holds ten string values: "one," "two,".... "ten." 
    Use a loop that converts a digit to its spelled-out value
    and vice versa.
*/ 

#include <iostream>
#include <vector>
#include <string> 

using namespace std; 

int main()
{
    vector <string> numbers(11); 
    numbers[0] = "zero"; 
    numbers[1] = "one";
    numbers[2] = "two";
    numbers[3] = "three";
    numbers[4] = "four";
    numbers[5] = "five";
    numbers[6] = "six";
    numbers[7] = "seven";
    numbers[8] = "eight";
    numbers[9] = "nine";
    numbers[10] = "ten";
    
    int index = 0;
    string spelled_out_number = " ";  
    cout << "Enter a number between 1 and 10: \n"; 
    while ((cin >> spelled_out_number) || (cin >> index)) {
    
        //if (cin >> spelled_out_number) {
        for (int i = 0; i < numbers.size(); i++) {
            if (spelled_out_number == numbers[i]) {
                cout << i << endl; 
                }
             } 
        //}
        
        //if (cin >> index) {
        if ((index >= 0) && (index <= 10)) {
            cout << numbers[index] << endl; 
        }       
        }
        //}
     return 0; 
} 
    
