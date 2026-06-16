/*
Problem: Sum of digits of a number
Concept: Functions
*/

#include <iostream>

int digit_sum(int num);

int main() {
    int num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    std::cout << "Sum of digits: " << digit_sum(num) << std::endl;

    return 0;
}

int digit_sum(int num) {
    int sum = 0;

    while(num != 0) {
        int digit = num % 10;
        sum += digit;
        num = num / 10;
    }

    return sum;
}