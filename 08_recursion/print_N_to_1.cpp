/*
Problem: Print N to 1
Concept: Recursion
*/

#include <iostream>

int print_numbers(int n);

int main() {
    int n;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    std::cout << "Numbers are: ";

    print_numbers(n);

    return 0;
}

int print_numbers(int n) {
    if(n == 0) {
        return 0;
    }

    std::cout << n << " ";

    print_numbers(n - 1);
}