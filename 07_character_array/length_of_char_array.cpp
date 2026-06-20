/*
Problem: Length of the char array
Concept: Strings
Approach: Without using string utility functions
*/

#include <iostream>

int string_length(char arr[]);

int main() {
    char name[] = "Queen Victoria";

    std::cout << "Name: " << name << std::endl;

    std::cout << "Length: " << string_length(name) << std::endl;

    return 0;
}

int string_length(char arr[]) {
    int length = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
        length++;
    }

    return length;
}