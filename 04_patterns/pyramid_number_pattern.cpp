/*
Problem: Pyramid Number Pattern
Concept: Loops
*/

#include <iostream>

int main() {
    int n;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        int num = 1;

        // Spaces
        for (int j = 0; j < n - i - 1; j++) {
            std::cout << "  ";
        }

        // Number Set 1 - Inverted Right Triangle
        for(int k = n - i - 1; k < n; k++) {
            std::cout << num << " ";
            num++;
        }

        // Number Set 2 - Left Triangle
        for(int l = i; l > 0; l--) {
            std::cout << l << " ";
        }
 
        std::cout << "\n";
    }

    return 0;
}