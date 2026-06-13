/*
Problem: Sum of two numbers
Concept: Functions
*/

#include <iostream>

int sum(int a, int b);

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "Sum is " << sum(num1, num2) << std::endl;

    return 0;
}

int sum(int a, int b) {
    return a + b;
}