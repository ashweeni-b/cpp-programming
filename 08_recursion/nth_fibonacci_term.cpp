/*
Problem: Nth term of fibonacci series
Concept: Recursion
*/

#include <iostream>

int fibonacci_term(int n);

int main() {
    int n;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    std::cout << n << "th term of fibonacci series is " << fibonacci_term(n) << std::endl;

    return 0;
}

int fibonacci_term(int n) {
    if(n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    }

    return fibonacci_term(n - 1) + fibonacci_term(n - 2);
}