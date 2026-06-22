/*
Problem: Power of a raised to b
Concept: Recursion
*/

#include <iostream>

int power(int base, int exponent);

int main() {
    int base, exponent;

    std::cout << "Enter the base and exponent: ";
    std::cin >> base >> exponent;

    std::cout << base << " raised to " << exponent << " is " << power(base, exponent) << std::endl;

    return 0;
}

int power(int base, int exponent) {
    if(exponent == 0) {
        return 1;
    }

    return base * power(base, exponent - 1);
}