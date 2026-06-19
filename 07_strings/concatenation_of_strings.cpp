/*
Problem: Concatenate two strings
Concept: Strings
Approach: Without using string utility functions
*/

#include <iostream>

int length_string(char arr[]);
void concatenate_string(char arr1[], char arr2[]);

int main() {
    char name[50] = "Jacob";
    char surname[] = "Smith";

    std::cout << "Strings before concatenation: " << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Surname: " << surname << std::endl;

    concatenate_string(name, surname);

    std::cout << "Strings after concatenation: " << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Surname: " << surname << std::endl;

    return 0;
}

int length_string(char arr[]) {
    int count = 0;
    int index = 0;

    while(arr[index] != '\0') {
        count++;
        index++;
    }

    return count;
}

void concatenate_string(char arr1[], char arr2[]) {
    int length = length_string(arr1);
    int index = 0;

    while(arr2[index] != '\0') {
        arr1[length] = arr2[index];
        length++;
        index++;
    }

    arr1[length] = '\0';
}