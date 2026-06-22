/*
Problem: Maximum of two numbers using call by value and call by reference
Concept: Function Call
Approach: Using both call by value and call by reference
*/

#include <iostream>

// Pass by value
void max_num(int a, int b, int max);

// Pass by reference
void max_val(int a, int b, int* max);

int main() {
    int a = 5, b = 8;
    int c = 18, d = 3;
    int max1 = 0;
    int max2 = 0;

    std::cout << "In main function max1: " << max1 << std::endl << std::endl;

    // Pass by value
    max_num(a, b, max1);

    std::cout << "In main function max1: " << max1 << std::endl << std::endl;

    std::cout << "In main function max2: " << max2 << std::endl << std::endl;

    max_val(a, b, &max2);

    std::cout << "In main function max2: " << max2 << std::endl << std::endl;

    return 0;
}

void max_num(int a, int b, int max) {
    std::cout << "Pass by value" << std::endl;
    std::cout << "Value of max1 before: " << max << std::endl;

    if(a >= b) {
        max = a;
    } else {
        max = b;
    }

    std::cout << "Value of max1 after: " << max << std::endl << std::endl;
}

void max_val(int a, int b, int* max) {
    std::cout << "Pass by reference" << std::endl;
    std::cout << "Value of max2 before: " << *max << std::endl;

    if(a >= b) {
        *max = a;
    } else {
        *max = b;
    }

    std::cout << "Value of max2 after: " << *max << std::endl << std::endl;
}