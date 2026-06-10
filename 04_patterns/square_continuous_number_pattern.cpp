/*
Problem: Square Continous Number Pattern
Concept: Loops
*/

#include <iostream>

int main() {
    int n;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int num = 1;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            std::cout << num << "  ";
            num++;
        }
        
        std::cout << std::endl;
    }

    return 0;
}