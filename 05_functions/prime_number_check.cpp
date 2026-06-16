/*
Problem: Prime Number Check
Concept: Functions
*/

#include <iostream>

void prime_number_check(int num);

int main() {
    int num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    if(num == 1) {
        std::cout << num << " is neither prime nor composite" << std::endl;
        return 0;
    }

    prime_number_check(num);

    return 0;
}

void prime_number_check(int num) {
    int div = 0;

    for(int i = 2; i < num; i++) {
        if(num % i == 0) {
            div++;
        }
    }

    if(div == 0) {
        std::cout << num << " is prime" << std::endl;
    } else {
        std::cout << num << " is composite" << std::endl;
    }
}