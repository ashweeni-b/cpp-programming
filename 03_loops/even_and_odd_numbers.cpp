/*
Problem: Print even and odd numbers between 1 and 100
Concept: Loops
*/

#include <iostream>

int main() {
    std::cout << "Even numbers between 1 and 100" << std::endl;

    for(int i = 1; i <= 100; i++) {
        if(i % 2 == 0) {
            std::cout << i << "\t";
        }
    }

    std::cout << std::endl << std::endl;

    std::cout << "Odd numbers between 1 and 100" << std::endl;

    for(int i = 1; i <= 100; i++) {
        if(i % 2 != 0) {
            std::cout << i << "\t";
        }
    }

    return 0;
}