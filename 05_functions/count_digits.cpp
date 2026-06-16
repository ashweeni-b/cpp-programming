/*
Problem: Count digits of a number
Concept: Functions
*/

#include <iostream>

int digit_count(int num);

int main() {
    int num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    std::cout << "Digits count: " << digit_count(num) << std::endl;

    return 0;
}

int digit_count(int num) {
    int count = 0;

    while(num != 0) {
        count++;
        num = num / 10;
    }

    return count;
}