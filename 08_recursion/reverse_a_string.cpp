/*
Problem: Reverse a string
Concept: Recursion
*/

#include <iostream>

void reverse_string(std::string& str, int start, int end);

int main() {
    std::string str;

    std::cout << "Enter the string: ";
    std::getline(std::cin, str);

    reverse_string(str, 0, str.length() - 1);

    std::cout << "Reversed string: " << str << std::endl;

    return 0;
}

void reverse_string(std::string& str, int start, int end) {
    if(start >= end) {
        return;
    }

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverse_string(str, start + 1, end - 1);
}