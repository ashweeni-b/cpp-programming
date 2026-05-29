/*
Problem: Area and Circumference of Circle
Concept: Input Output and Mathematics
*/

#include <iostream>

int main() {
    float radius;
    float pi = 3.14;

    std::cout << "Enter radius of the circle: ";
    std::cin >> radius;

    float area = pi * radius * radius;
    float circumference = 2 * pi * radius;
    
    std::cout << "Area is " << area << std::endl;
    std::cout << "Circumference is " << circumference << std::endl;

    return 0;
}