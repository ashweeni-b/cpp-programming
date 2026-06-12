/*
Problem: Inverted Left Triangle Character Pattern
Concept: Loops
*/

#include <iostream>

int main() {
    int n;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        // Spaces
        for(int j = i; j > 0; j--) {
            std::cout << "  ";
        }

        // Characters
        char character = i + 'A';
        for(int k = i; k < n; k++) {
            std::cout << character << " ";
        }

        std::cout << "\n";
    }

    return 0;
}