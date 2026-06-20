/*
Program: Reverse a string
Concept: Strings
*/

#include <iostream>
#include <algorithm>

int main() {
    std::string str;

    std::cout << "Enter the string: ";
    std::getline(std::cin, str);

    std::cout << "String: " << str << std::endl;

    reverse(str.begin(), str.end());

    std::cout << "Reverse String: " << str << std::endl;

    return 0;
}