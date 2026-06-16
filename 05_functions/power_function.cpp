/*
Problem: Calculate power without using library function
Concept: Functions
*/

#include <iostream>

int power(int base, int exponent);

int main() {
    int base, exponent;

    std::cout << "Enter the base: ";
    std::cin >> base;

    std::cout << "Enter the exponent: ";
    std::cin >> exponent;

    std::cout << base << " with power " << exponent << " is " << power(base, exponent) << std::endl;

    return 0;
}

int power(int base, int exponent) {
    int power = 1;

    while(exponent != 0) {
        power *= base;
        exponent--;
    }

    return power;
}