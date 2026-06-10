/*
Problem: Power of a number
Concept: Loops
*/

#include <iostream>

int main() {
    int base, exponent;

    std::cout << "Enter the base: ";
    std::cin >> base;

    std::cout << "Enter the exponent: ";
    std::cin >> exponent;

    int power = 1;

    for(int i = 0; i < exponent; i++) {
        power = base * power;
    }

    std::cout << "Power: " << power << std::endl;

    return 0;
}