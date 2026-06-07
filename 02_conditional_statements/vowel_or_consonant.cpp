/*
Problem: Check whether a character is vowel or consonant
Concept: Conditionals
*/

#include <iostream>

int main() {
    char ch;

    std::cout << "Enter the character: ";
    std::cin >> ch;

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        std::cout << ch << " is a vowel" << std::endl;
    } else {
        std::cout << ch << " is a consonant" << std::endl;
    }

    return 0;
}