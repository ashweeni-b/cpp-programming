/*
Problem: Butterfly Pattern
Concept: Loops
*/

#include <iostream>

int main() {
    int n;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    // Top Part
    for(int i = 0; i < n; i++) {
        // Star
        for(int j = 0; j <= i; j++) {
            std::cout << "* ";
        }

        // Space
        for(int j = 0; j < 2 * (n - i - 1); j++) {
            std::cout << "  ";
        }

        // Star
        for(int j = 0; j <= i; j++) {
            std::cout << "* ";
        }

        std::cout << "\n";
    }

    // Bottom Part
    for(int i = n - 1; i >= 0; i--) {
        // Star
        for(int j = 0; j <= i; j++) {
            std::cout << "* ";
        }

        // Space
        for(int j = 0; j < 2 * (n - i - 1); j++) {
            std::cout << "  ";
        }

        // Star
        for(int j = 0; j <= i; j++) {
            std::cout << "* ";
        }

        std::cout << "\n";
    }

    return 0;
}