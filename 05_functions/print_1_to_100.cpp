/*
Problem: Print 1 to 100
Concept: Functions
*/

#include <iostream>

void print_numbers();

int main() {
    print_numbers();

    return 0;
}

void print_numbers() {
    for(int i = 1; i <= 100; i++) {
        std::cout << i << " ";
    }
}