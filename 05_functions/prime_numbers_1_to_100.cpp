/*
Problem: Print prime number between 1 to 100
Concept: Functions
*/

#include <iostream>

void print_prime_numbers();

int main() {
    print_prime_numbers();

    return 0;
}

void print_prime_numbers() {
    for(int i = 2; i <= 100; i++) {
        int div = 0;
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                div++;
            }
        }

        if(div == 0) {
            std::cout << i << " ";
        }
    }
}