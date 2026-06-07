/*
Problem: Check whether a year is a leap year or not
Concept: Conditionals and Operators
*/

#include <iostream>

int main() {
    int year;

    std::cout << "Enter the year: ";
    std::cin >> year;

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        std::cout << year << " is a leap year" << std::endl;
    } else {
        std::cout << year << " is not a leap year" << std::endl;
    }

    return 0;
}