/*
Problem: LCM of two numbers
Concept: Loops
*/

#include <iostream>

int min(int a, int b);

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int lcm = 1;

    for(int i = min(num1, num2); i <= num1 * num2; i++) {
        if(i % num1 == 0 && i % num2 == 0) {
            lcm = i;
            break;
        }
    }

    std::cout << "LCM of " << num1 << " and " << num2 << " is " << lcm << std::endl;

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