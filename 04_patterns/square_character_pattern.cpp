/*
Problem: Square Character Pattern
Concept: Loops
*/

#include <iostream>

int main() {
    int n;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    for(int i = 1; i <= n; i++) {
        char ch = 'A';
        for(int j = 1; j <= n; j++) {
            std::cout << ch << "  ";
            ch++;
        }

        std::cout << std::endl;
    }

    return 0;
}