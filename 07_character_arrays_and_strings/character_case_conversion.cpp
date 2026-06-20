/*
Problem: Convert case of the string
Concept: Strings
Approach: Convert uppercase to lowercase by ch - 'A' + 'a'
and lowercase to uppercase by ch - 'a' + 'A'
*/

#include <iostream>

int main() {
    std::string str;

    std::cout << "Enter the string: ";
    std::getline(std::cin, str);

    std::cout << "String: " << str << std::endl;

    for(char& ch: str) {
        if(ch >= 'A' && ch <= 'Z') {
            ch = ch - 'A' + 'a';
        } else if(ch >= 'a' && ch <= 'z') {
            ch = ch - 'a' + 'A';
        } else {
            continue;
        }
    }

    std::cout << "String: " << str << std::endl;

    return 0;
}