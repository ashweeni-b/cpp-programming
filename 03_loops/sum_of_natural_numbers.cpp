/*
Problem: Calculate sum of first n natural numbers
Concept: Loops
*/

#include <iostream>

int main() {
    int num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    int sum = 0;

    for(int i = 1; i <= num; i++) {
        sum += i;
    }

    std::cout << "Sum of first " << num << " natural numbers is " << sum << std::endl;

    return 0;
}