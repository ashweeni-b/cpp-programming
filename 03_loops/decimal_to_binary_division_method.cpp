/*
Problem: Convert decimal numbers to binary
Concept: Loops
Approach: Using division method and user defined power function
*/

#include <iostream>

int power(int a, int b);

int main() {
    int decimal;

    std::cout << "Enter decimal number: ";
    std::cin >> decimal;

    int binary = 0, i = 0;

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