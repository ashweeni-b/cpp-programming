/*
Problem: Factorial of a number
Concept: Loops
*/

#include <iostream>

int main() {
    int num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    int fact = 1, i = num;

    while(i > 0) {
        fact = i * fact;
        i--;
    }

    std::cout << "Factorial of " << num << " is " << fact << std::endl;

    return 0;
}