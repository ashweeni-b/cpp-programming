/*
Problem: Simple Interest
Concept: Functions
*/

#include <iostream>

float simple_interest(int n, int p, float r);

int main() {
    int n, p;
    float r;

    std::cout << "Enter the principal amount: ";
    std::cin >> p;

    std::cout << "Enter the time period: ";
    std::cin >> n;

    std::cout << "Enter the rate of interest: ";
    std::cin >> r;

    float interest = simple_interest(n, p, r);

    std::cout << "Simple Interest: " << interest << std::endl;

    return 0;
}

float simple_interest(int n, int p, float r) {
    return (n * p * r) / 100;
}