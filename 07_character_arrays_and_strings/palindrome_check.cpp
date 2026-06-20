/*
Problem: Palindrome Check
Concept: Strings
*/

#include <iostream>
#include <algorithm>

int main() {
    std::string original_string;

    std::cout << "Enter the string: ";
    std::getline(std::cin, original_string);

    std::string reverse_string = original_string;

    reverse(reverse_string.begin(), reverse_string.end());

    if(original_string == reverse_string) {
        std::cout << original_string << " is palindrome";
    } else {
        std::cout << original_string << " is not palindrome";
    }

    return 0;
}