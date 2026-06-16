/*
Problem: LCM of two numbers
Concept: Functions
*/

#include <iostream>

int min(int a, int b);
int max(int a, int b);
int lcm(int num1, int num2);

int main() {
    int num1, num2;

    std::cout << "Enter the numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "LCM of " << num1 << " and " << num2 << " is " << lcm(num1, num2);

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

int max(int a, int b) {
    int max;
    if(a >= b) {
        max = a;
    } else {
        max = b;
    }

    return max;
}

int lcm(int num1, int num2) {
    int a = min(num1, num2);
    int b = max(num1, num2);
    int lcm = 1;

    for(int i = a; i <= a * b; i += a) {
        if(i % b == 0) {
            lcm = i;
            break;
        }
    }

    return lcm;
}