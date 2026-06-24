/*
Problem: Maximum of two numbers
Concept: Pointers
*/

#include <iostream>

int main() {
    int a, b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    int max = 0;

    int* max_ptr = &max;

    std::cout << "Max variable before: " << max << std::endl;

    if(a >= b) {
        *max_ptr = a;
    } else {
        *max_ptr = b;
    }

    std::cout << "Max variable after: " << max << std::endl;

    return 0;
}