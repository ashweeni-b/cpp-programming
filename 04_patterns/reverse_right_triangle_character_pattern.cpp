/*
Problem: Reverse Right Triangle Character Pattern
Concept: Loops
*/

#include <iostream>

int main() {
    int n;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    char ch = 'A';

    for(int i = 0; i < n; i++) {
        for(int j = i; j >= 0; j--) {
            char character = ch + j;
            std::cout << character << "  ";
        }

        std::cout << "\n";
    }

    return 0;
}