/*
Problem: Sum of first n numbers
Concept: Recursion
*/

#include <iostream>

int sum(int n);

int main() {
    int n;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    std::cout << "Sum of first " << n << " numbers is " << sum(n);

    return 0;
}

int sum(int n) {
    if(n == 0) {
        return 0;
    }

    return n + sum(n - 1);
}