/*
Problem: Area of rectangle
Concept: Input Output and Mathematics
*/

#include <iostream>

int main() {
    int length, breadth;

    std::cout << "Enter the value of length: ";
    std::cin >> length;

    std::cout << "Enter the value of breadth: ";
    std::cin >> breadth;

    int area = length * breadth;

    std::cout << "Area of rectangle is " << area << std::endl;

    return 0;
}