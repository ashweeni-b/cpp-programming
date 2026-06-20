/*
Problem: Converting strings to integers
Concept: Strings
Approach: Using stoi() function
*/

#include <iostream>

int main() {
    std::string str;

    std::cout << "Enter the string: ";
    std::getline(std::cin, str);

    std::cout << "String: " << str << std::endl;

    int number = stoi(str);

    std::cout << "Number: " << number << std::endl;

    return 0;
}