/*
Problem: Swapping two numbers using pass by value and pass by reference
Concept: Function Call
Approach: Using both call by value and call by reference
*/

#include <iostream>

// Pass by value function declaration
void swap_num(int a, int b);

// Pass by reference function declaration
void swap_val(int* a, int* b);

int main() {
    int a = 5;
    int b = 10;

    std::cout << "In main function values of a: " << a << " and b: " << b << std::endl << std::endl;
    
    // Passing value of a
    swap_num(a, b);
    
    std::cout << "In main function values of a: " << a << " and b: " << b << std::endl << std::endl;

    // Passing address of b
    swap_val(&a, &b);

    std::cout << "In main function values of a: " << a << " and b: " << b << std::endl;

    return 0;
}

void swap_num(int a, int b) {
    std::cout << "Pass by value" << std::endl;
    std::cout << "Value before swapping: " << a << " " << b << std::endl;

    int temp = a;
    a = b;
    b = temp;

    std::cout << "Value after swapping: " << a << " " << b << std::endl << std::endl;
}

void swap_val(int* a, int* b) {
    std::cout << "Pass by reference" << std::endl;
    std::cout << "Value before swapping: " << *a << " " << *b << std::endl;

    int temp = *a;
    *a = *b;
    *b = temp;

    std::cout << "Value after swapping: " << *a << " " << *b << std::endl << std::endl;
}