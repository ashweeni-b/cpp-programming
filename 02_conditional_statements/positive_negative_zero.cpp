/*
Problem: Positive, Negative or Zero Number
Concept: Conditionals and Operators
*/

#include <iostream>

int main() {
    int number;

    std::cout << "Enter the number: ";
    std::cin >> number;

    if(number == 0) {
        std::cout << "Zero" << std::endl;
    } else if(number > 0) {
        std::cout << "Positive Number" << std::endl;
    } else {
        std::cout << "Negative Number" << std::endl;
    }

    return 0;
}