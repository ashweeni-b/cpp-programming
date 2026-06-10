/*
Problem: Check whether a number is prime number or not
Concept: Loops
*/

#include <iostream>

int main() {
    int num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    int divisor = 0;

    for(int i = 2; i < num; i++) {
        if(num % i == 0) {
            divisor++;
        }
    }

    if(num == 0) {
        std::cout << "Invalid input" << std::endl;
    } else if(num == 1) {
        std::cout << num << " is neither prime nor composite" << std::endl;
    } else if(num == 2) {
        std::cout << num << " is even prime number" << std::endl;
    } else if(divisor == 0) {
        std::cout << num << " is a prime number" << std::endl;
    } else {
        std::cout << num << " is a composite number" << std::endl;
    }

    return 0;
}