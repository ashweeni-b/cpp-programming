/*
Problem: Squaring number using pass by value and pass by reference
Concept: Function Call
Approach: Using both call by value and call by reference
*/

#include <iostream>

// Pass by value function declaration
void square_num(int a, int square);

// Pass by reference function declaration
void square_val(int a, int* square);

int main() {
    int num1 = 5;
    int num2 = 10;

    int square1 = 0;
    int square2 = 0;

    std::cout << "In main function values of num1: " << num1 << " and square1: " << square1 << std::endl << std::endl;
    
    // Passing num1 and value of square1
    square_num(num1, square1);
    
    std::cout << "In main function values of num1: " << num1 << " and square1: " << square1 << std::endl << std::endl;

    std::cout << "In main function values of num2: " << num2 << " and square2: " << square2 << std::endl << std::endl;

    // Passing num2 and address of square2
    square_val(num2, &square2);

    std::cout << "In main function values of num2: " << num2 << " and square2: " << square2 << std::endl << std::endl;

    return 0;
}

void square_num(int a, int square) {
    std::cout << "Pass by value" << std::endl;
    std::cout << "Value before squaring - num1: " << a << " and square1: " << square << std::endl;
    
    square = a * a;

    std::cout << "Value after squaring - num1: " << a << " and square1: " << square << std::endl << std::endl;
}

void square_val(int a, int* square) {
    std::cout << "Pass by reference" << std::endl;
    std::cout << "Value before squaring - num2: " << a << " and square2: " << *square << std::endl;

    *square = a * a;

    std::cout << "Value after squaring - num2: " << a << " and square2: " << *square << std::endl << std::endl;
}