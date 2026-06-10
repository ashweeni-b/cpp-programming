/*
Problem: Square Continuous Character Pattern
Concept: Loops
*/

#include <iostream>

int main() {
    int n;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    char ch = 'A';

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            std::cout << ch << "  ";
            ch++;
        }

        std::cout << std::endl;
    }

    return 0;
}