/*
Problem: Nth term of fibonacci sequence
Concept: Functions
*/

#include <iostream>

int nth_term(int n);

int main() {
    int n;

    std::cout << "Enter the position: ";
    std::cin >> n;

    std::cout << n << "th element is " << nth_term(n);

    return 0;
}

int nth_term(int n) {
    if(n == 1 || n == 0) {
        return 0;
    } else if (n == 2) {
        return 1;
    }

    return nth_term(n - 1) + nth_term(n - 2);
}