/*
Problem: Product of digits of a number
Concept: Recursion
*/

#include <iostream>

int digit_product(int num);

int main() {
    int num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    std::cout << "Digits product: " << digit_product(num);

    return 0;
}

int digit_product(int num) {
    if(num == 0) {
        return 1;
    }

    return (num % 10) * digit_product(num / 10);
}