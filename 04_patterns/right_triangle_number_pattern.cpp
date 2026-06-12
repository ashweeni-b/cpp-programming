/*
Problem: Right Triangle Number Pattern
Concept: Loops
*/

#include <iostream>

int main() {
    int n;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        int num = 1;

        for(int j = 0; j <= i; j++) {
            std::cout << num << "  ";
            num++;
        }

        std::cout << "\n";
    }

    return 0;
}