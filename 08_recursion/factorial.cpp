/*
Problem: Factorial of a number
Concept: Recursion
*/

#include <iostream>

int factorial(int n);

int main() {
    int n;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    std::cout << "Factorial of " << n << " is " << factorial(n);

    return 0;
}

int factorial(int n) {
    if(n == 0) {
        return 1;
    }

    return n * factorial(n - 1);
}