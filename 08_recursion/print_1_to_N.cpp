/*
Problem: Print 1 to N
Concept: Recursion
*/

#include <iostream>

int print_numbers(int n);

int main() {
    int n;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    std::cout << "Numbers are: " << std::endl;

    print_numbers(n);

    return 0;
}

int print_numbers(int n) {
    if(n == 0) {
        return 0;
    }

    print_numbers(n - 1);

    std::cout << n << " ";
}