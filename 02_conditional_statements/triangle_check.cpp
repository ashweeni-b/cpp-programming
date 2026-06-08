/*
Problem: Check whether triangle is valid or not
Concept: Conditionals and Operators
*/

#include <iostream>

int main() {
    int angle1, angle2, angle3;

    std::cout << "Enter three angles: ";
    std::cin >> angle1 >> angle2 >> angle3;

    if(angle1 + angle2 + angle3 == 180) {
        std::cout << "Valid triangle" << std::endl;
    } else {
        std::cout << "Invalid triangle" << std::endl;
    }

    return 0;
}