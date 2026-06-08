/*
Problem: Convert decimal number to binary number
Concept: Loops
Approach: Using bitwise operators and user defined power function
*/

#include <iostream>

int power(int a, int b);

int main() {
    int decimal;

    std::cout << "Enter the number: ";
    std::cin >> decimal;

    int i = 0, binary = 0;

    while(decimal != 0) {
        int bit = decimal % 2;
        decimal = decimal / 2;

        binary = bit * power(10, i) + binary;

        i++;
    }

    std::cout << "Binary: " << binary << std::endl;

    return 0;
}

int power(int a, int b) {
    int power = 1;

    for(int i = 0; i < b; i++) {
        power = a * power;
    }

    return power;
}