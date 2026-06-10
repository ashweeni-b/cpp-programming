/*
Problem: GCD / HCF of two numbers
Concept: Loops
*/

#include <iostream>

int min(int a, int b);

int main() {
    int num1, num2;

    std::cout << "Enter the numbers: ";
    std::cin >> num1 >> num2;

    int gcd = 0;

    for(int i = 1; i <= min(num1, num2); i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    std::cout << "GCD of " << num1 << " and " << num2 << " is " << gcd << std::endl;

    return 0;
}

int min(int a, int b) {
    int minimum;

    if(a < b) {
        minimum = a;
    } else {
        minimum = b;
    }

    return minimum;
}