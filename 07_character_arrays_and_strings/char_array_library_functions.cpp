/*
Problem: Demonstration of char array library functions
Concept: Char arrays
*/

#include <iostream>
#include <cstring>

int main() {
    char name[50] = "Jacob";
    char surname[50] = "Paul";

    std::cout << "Strings are: " << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Surname: " << surname << std::endl;

    std::cout << std::endl;

    // String length
    std::cout << "Length of " << name << " is " << strlen(name) << std::endl;
    std::cout << "Length of " << surname << " is " << strlen(surname) << std::endl;

    std::cout << std::endl;

    // Comparison of string
    std::cout << "Comparison of " << name << " and " << surname << ": " << strcmp(name, surname) << std::endl;

    std::cout << std::endl;

    // Concatenation of string
    strcat(name, surname);

    std::cout << "Strings after concatenation are: " << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Surname: " << surname << std::endl;

    std::cout << std::endl;

    // Copying of string
    strcpy(name, "Jacob");

    std::cout << "Strings after copying are: " << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Surname: " << surname << std::endl;

    return 0;
}