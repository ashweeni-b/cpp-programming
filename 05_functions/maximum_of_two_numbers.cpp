/*
Problem: Maximum of two numbers
Concept: Functions
*/

#include <iostream>

int max(int a, int b);

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "Maximum is " << max(num1, num2) << std::endl;

    return 0;
}

int max(int a, int b) {
    int max;

    if(a >= b) {
        max = a;
    } else {
        max = b;
    }

    return max;
}