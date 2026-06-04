/*
Problem: Convert minutes into hours and minutes
Concept: Operators
*/

#include <iostream>

int main() {
    int minutes;

    std::cout << "Enter the total minutes: ";
    std::cin >> minutes;

    std::cout << "Total minutes: " << minutes << std::endl;
    std::cout << "Hours: " << minutes / 60 << std::endl;
    std::cout << "Minutes: " << minutes % 60 << std::endl;

    return 0;
}