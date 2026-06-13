/*
Problem: Factorial of a number
Concept: Functions
*/

#include <iostream>

int factorial(int n);

int main() {
    int num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    std::cout << "Factorial is " << factorial(num) << std::endl;

    return 0;
}

int factorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }

    return n * factorial(n - 1);
}