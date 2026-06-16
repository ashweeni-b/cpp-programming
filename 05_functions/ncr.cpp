/*
Problem: nCr calculation
Concept: Functions
*/

#include <iostream>

long long int ncr_calculation(int n, int r);
long long int factorial(int n);

int main() {
    int n, r;

    std::cout << "Enter the number of objects: ";
    std::cin >> n;

    std::cout << "Enter the number of object chosen at once: ";
    std::cin >> r;

    std::cout << "nCr is " << ncr_calculation(n, r);

    return 0;
}

long long int ncr_calculation(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

long long int factorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    } 

    return n * factorial(n - 1);
}