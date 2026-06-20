/*
Problem: Increment number using pass by value and pass by reference
Concept: Function Call
Approach: Using both call by reference and call by value
*/

#include <iostream>

// Pass by value function declaration
void increment_num(int a);

// Pass by reference function declaration
void increment_val(int* a);

int main() {
    int a = 5;
    int b = 10;

    std::cout << "In main function values of a: " << a << " and b: " << b << std::endl << std::endl;
    
    // Passing value of a
    increment_num(a);
    
    // Passing address of b
    increment_val(&b);

    std::cout << "In main function values of a: " << a << " and b: " << b << std::endl;

    return 0;
}

void increment_num(int a) {
    std::cout << "Pass by value" << std::endl;
    std::cout << "Value before incrementing: " << a << std::endl;

    a++;

    std::cout << "Value after incrementing: " << a << std::endl << std::endl;
}

void increment_val(int* a) {
    std::cout << "Pass by reference" << std::endl;
    std::cout << "Value before incrementing: " << *a << std::endl;

    (*a)++;

    std::cout << "Value after incrementing: " << *a << std::endl << std::endl;
}