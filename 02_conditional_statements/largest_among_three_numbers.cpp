/*
Problem: Largest among three numbers
Concept: Conditional and Operators
*/

#include <iostream>

int main() {
    int num1, num2, num3;

    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    if(num1 > num2 && num2 > num3) {
        std::cout << num1 << " is greater" << std::endl;
    } else if(num2 > num1 && num1 > num3) {
        std::cout << num2 << " is greater" << std::endl;
    } else {
        std::cout << num3 << " is greater" << std::endl;
    }

    return 0;
}