/*
Problem: Binary to Decimal Conversion
Concept: Functions
*/

#include <iostream>

int power(int base, int exponent);
int binary_to_decimal(int num);

int main() {
    int binary;

    std::cout << "Enter the binary number: ";
    std::cin >> binary;

    std::cout << "Decimal equivalent is " << binary_to_decimal(binary);

    return 0;
}

int power(int base, int exponent) {
    int power = 1;

    while(exponent != 0) {
        power = base * power;
        exponent--;
    }

    return power;
}

int binary_to_decimal(int num) {
    int decimal = 0;
    int count = 0;

    while(num != 0) {
        int bit = num % 10;
        decimal = bit * power(2, count) + decimal;
        num = num / 10;
        count++;
    }

    return decimal;
}