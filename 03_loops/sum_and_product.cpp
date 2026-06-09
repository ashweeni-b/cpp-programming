/*
Problem: Sum and Product of digits of a number
Concept: Loops
*/

#include <iostream>

int main() {
    int num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    int sum = 0;
    int product = 1;

    while(num != 0) {
        int digit = num % 10;

        sum += digit;
        product *= digit;

        num = num / 10;
    }

    std::cout << "Sum of digits: " << sum << std::endl;
    std::cout << "Product of digits: " << product << std::endl;

    return 0;
}