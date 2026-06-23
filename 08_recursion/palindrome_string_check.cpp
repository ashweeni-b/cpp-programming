/*
Problem: Check palindrome string
Concept: Recursion
*/

#include <iostream>

bool is_palindrome(std::string& str, int start, int end);

int main() {
    std::string str;

    std::cout << "Enter the string: ";
    std::cin >> str;

    if(is_palindrome(str, 0, str.length() - 1)) {
        std::cout << str << " is palindrome" << std::endl;
    } else {
        std::cout << str << " is not palindrome" << std::endl;
    }

    return 0;
}

bool is_palindrome(std::string& str, int start, int end) {
    if(start >= end) {
        return true;
    }

    if(str[start] != str[end]) {
        return false;
    }

    return is_palindrome(str, start + 1, end - 1);
}