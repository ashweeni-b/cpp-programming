/*
Program: Copy one char array into another
Concept: Char array
Approach: Without using char array utility functions
*/

#include <iostream>

void copy_strings(char source[], char target[]);

int main() {
    char name[50] = "Jacob";
    char surname[] = "Paul";

    std::cout << "Strings before copying: " << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Surname: " << surname << std::endl;

    copy_strings(name, surname);

    std::cout << "Strings after copying: " << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Surname: " << surname << std::endl;

    return 0;
}

void copy_strings(char source[], char target[]) {
    int i = 0;

    while(target[i] != '\0') {
        source[i] = target[i];
        i++;
    }

    source[i] = '\0';
}