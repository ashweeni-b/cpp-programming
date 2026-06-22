/*
Problem: Count of digits of a number
Concept: Recursion
*/

#include <iostream>

int digit_count(int num);

int main() {
    int num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    std::cout << "Digits count: " << digit_count(num);

    return 0;
}

int digit_count(int num) {
    if(num == 0) {
        return 0;
    }

    return 1 + digit_count(num / 10);
}