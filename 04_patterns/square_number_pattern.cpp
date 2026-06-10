/*
Problem: Square Number Pattern
Concept: Loops
*/

#include <iostream>

int main() {
    int n;

    std::cout << "Enter value of n: ";
    std::cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            std::cout << j << "  ";
        }

        std::cout << "\n";
    }

    return 0;
}