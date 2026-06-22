/*
Problem: Sum of digits of a number
Concept: Recursion
*/

#include <iostream>

int digit_sum(int num);

int main() {
    int num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    std::cout << "Digits sum: " << digit_sum(num) << std::endl;

    return 0;
}

int digit_sum(int num) {
    if(num == 0) {
        return 0;
    }

    return (num % 10) + digit_sum(num / 10);
}