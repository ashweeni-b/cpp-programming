/*
Problem: Hollow Diamond Pattern
Concept: Loops
*/

#include <iostream>

int main() {
    int n;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    // Top Loop
    for(int i = 0; i < n; i++) {
        // Initial Spaces
        for(int j = 0; j < n - i - 1; j++) {
            std::cout << " ";
        }
        
        // Star after first spaces
        std::cout << "*";

        // Spaces after star
        for(int j = 0; j < 2 * i - 1; j++) {
            std::cout << " ";
        }

        // Star after second spaces
        if(i == 0) {
            std::cout << "\n";
            continue;
        } else {
            std::cout << "*";
        }

        std::cout << "\n";
    }

    // Bottom Loop
    for(int i = n - 2; i >= 0; i--) {
        // Initial spaces
        for(int j = n - i - 1; j > 0; j--) {
            std::cout << " ";
        }

        // Star after first spaces
        std::cout << "*";

        // Space after star
        for(int j = 0; j < 2 * i - 1; j++) {
            std::cout << " ";
        }

        // Star after second spaces
        if(i == 0) {
            std::cout << "\n";
            continue;
        } else {
            std::cout << "*";
        }

        std::cout << "\n";
    }

    return 0;
}