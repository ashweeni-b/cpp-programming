/*
Problem: Check whether character is uppercase or lowercase
Concept: Conditionals
*/

#include <iostream>

int main() {
    char ch;

    std::cout << "Enter the character: ";
    std::cin >> ch;

    if(ch >= 'A' && ch <= 'Z') {
        std::cout << ch << " is an uppercase character" << std::endl;
    } else if (ch >= 'a' && ch <= 'z') {
        std::cout << ch << " is an lowercase character" << std::endl;
    } else {
        std::cout << ch << " is a non-alphabetic character" << std::endl;
    }

    return 0;
}