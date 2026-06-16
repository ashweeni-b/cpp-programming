/*
Problem: Decimal to Binary Conversion
Concept: Functions
*/

#include <iostream>

int power(int base, int exponent);
int decimal_to_binary(int decimal);

int main() {
    int decimal;

    std::cout << "Enter decimal number: ";
    std::cin >> decimal;

    int binary = decimal_to_binary(decimal);

    std::cout << "Binary equivalent is " << binary << std::endl;

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

int decimal_to_binary(int decimal) {
    int binary = 0;
    int count = 0;

    while(decimal != 0) {
        int bit = decimal % 2;
        binary += bit * power(10, count);
        decimal = decimal / 2;
        count++;
    }

    return binary;
}