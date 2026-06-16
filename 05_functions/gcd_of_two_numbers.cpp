/*
Problem: GCD of two numbers
Concept: Functions
*/

#include <iostream>

int gcd(int a, int b);
int min(int a, int b);

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << std::endl;

    return 0;
}

int min(int a, int b) {
    int min;

    if(a <= b) {
        min = a;
    } else {
        min = b;
    }

    return min;
}

int gcd(int a, int b) {
    int gcd;
    for(int i = 1; i <= min(a, b); i++) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    return gcd;
}