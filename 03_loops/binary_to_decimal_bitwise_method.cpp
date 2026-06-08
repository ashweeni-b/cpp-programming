/*
Problem: Convert binary number to decimal number
Concept: Loops
Approach: Using bitwise operators and user defined power function
Note: Input cannot be taken as binary number because the input
considers the value as decimal and not binary. Therefore, hard-coded
binary value should be used
*/

#include <iostream>

int power(int a, int b);

int main() {
    int binary = 0b1010;

    int i = 0, decimal = 0;

    while(binary != 0) {
        int bit = binary & 1;
        binary = binary >> 1;

        decimal = bit * power(2, i) + decimal;

        i++;
    }

    std::cout << "Decimal: " << decimal << std::endl;

    return 0;
}

int power(int a, int b) {
    int power = 1;
    for(int i = 0; i < b; i++) {
        power = a * power;
    }

    return power;
}