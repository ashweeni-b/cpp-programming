/*
Problem: Largest among two numbers
Concept: Conditionals and operators
*/

#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    if(num1 > num2) {
        std::cout << num1 << " is greater" << std::endl;
    } else if(num1 < num2) {
        std::cout << num2 << " is greater" << std::endl;
    } else {
        std::cout << "Both are equal" << std::endl;
    }

    return 0;
}