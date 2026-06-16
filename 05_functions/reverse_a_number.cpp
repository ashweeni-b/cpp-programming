/*
Problem: Reverse a number
Concept: Functions
*/

#include <iostream>

int reverse_num(int num);
int power_num(int base, int exponent);
int count_num(int num);

int main() {
    int num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    std::cout << "Reverse number: " << reverse_num(num) << std::endl;

    return 0;
}

int reverse_num(int num) {
    int reverse_number = 0;
    int exponent = count_num(num) - 1;

    while(num != 0) {
        int digit = num % 10;

        reverse_number = digit * power_num(10, exponent) + reverse_number;

        num = num / 10;
        exponent--;
    }

    return reverse_number;
}

int count_num(int num) {
    int count = 0;

    while(num != 0) {
        count++;
        num = num / 10;
    }

    return count;
}

int power_num(int base, int exponent) {
    int power = 1;

    while(exponent != 0) {
        power = base * power;
        exponent--;
    }

    return power;
}