/*
Problem: Acessing variable using pointers
Concept: Pointers
*/

#include <iostream>

int main() {
    int num = 10;

    // Declaring pointers
    int* ptr = &num;

    std::cout << "Value of variable: " << *ptr << std::endl;
    std::cout << "Address of variable: " << ptr << std::endl;

    std::cout << "Adding 5 to variable: " << (*ptr) + 5 << std::endl;

    return 0;
}