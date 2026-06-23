/*
Problem: Reverse a number
Concept: Recursion
*/

#include <iostream>

int digit_count(int num);
int power(int base, int exponent);
int reverse_number(int num, int count);

int main() {
    int num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    int count = digit_count(num);

    std::cout << "Reverse number: " << reverse_number(num, count - 1) << std::endl;

    return 0;
}

int digit_count(int num) {
    if(num == 0) {
        return 0;
    }

    return 1 + digit_count(num / 10);
}

int power(int base, int exponent) {
    if(exponent == 0) {
        return 1;
    }

    return base * power(base, exponent - 1);
}

int reverse_number(int num, int count) {
    if(num == 0) {
        return 0;
    }

    return (num % 10) * power(10, count) + reverse_number(num / 10, count - 1);
}