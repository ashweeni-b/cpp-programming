/*
Problem: Count the number of digits
Concept: Loops
*/

#include <iostream>

int main() {
    int num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    int count = 0;

    while(num != 0) {
        count++;
        num = num / 10;
    }

    std::cout << "Number of digits is " << count << std::endl;

    return 0;
}