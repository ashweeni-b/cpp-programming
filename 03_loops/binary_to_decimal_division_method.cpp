/*
Problem: Binary to Decimal Conversion
Concept: Loops
Approach: Using division method and user defined power function
*/

#include <iostream>

int power(int a, int b);

int main() {
    int binary;

    std::cout << "Enter binary  number: ";
    std::cin >> binary;

    int decimal = 0;
    int i = 0;

    while(binary != 0) {
        int bit = binary % 10;
        binary = binary / 10;

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