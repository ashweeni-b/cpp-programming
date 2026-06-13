/*
Problem: Maximum of three numbers
Concept: Functions
*/

#include <iostream>

int max(int a, int b);

int main() {
    int num1, num2, num3;

    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    std::cout << "Maximum is " << max(max(num1, num2), num3);

    return 0;
}

int max(int a, int b) {
    int max;

    if(a >= b) {
        max = a;
    } else {
        max = b;
    }

    return max;
}