/*
Problem: Comparison of strings
Concept: Strings
Approach: Without using string utility functions
Returns -1 if character of array1 < character of array2
Returns 1 if character of array1 > character of array2
Returns 0 if both strings are equal
*/

#include <iostream>

int string_comparison(char arr1[], char arr2[]);

int main() {
    char string1[50], string2[50];

    std::cout << "Enter the strings: " << std::endl;
    std::cout << "String 1: ";
    std::cin >> string1;
    std::cout << "String 2: ";
    std::cin >> string2;

    std::cout << std::endl;

    std::cout << "Strings are: " << std::endl;
    std::cout << "String 1: " << string1 << std::endl;
    std::cout << "String 2: " << string2 << std::endl;

    std::cout << std::endl;

    std::cout << "Comprison: " << string_comparison(string1, string2) << std::endl;

    return 0;
}

int string_comparison(char arr1[], char arr2[]) {
    int flag = 0;
    int index1 = 0, index2 = 0;

    while(arr1[index1] != '\0' || arr2[index2] != '\0') {
        if(arr1[index1] > arr2[index2]) {
            return 1;
        } else if (arr1[index1] < arr2[index2]) {
            return -1;
        } else {
            index1++;
            index2++;
        }
    }

    return flag;
}