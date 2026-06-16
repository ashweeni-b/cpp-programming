/*
Problem: Armstrong Number Check
Concept: Functions
*/

#include <iostream>

int power(int base, int exponent);
int digit_count(int num);
void armstrong_check(int num);

int main() {
    int num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    armstrong_check(num);

    return 0;
}

void armstrong_check(int num) {
    int original = num;
    int armstrong = 0;
    int count = digit_count(num);

    while(num != 0) {
        int digit = num % 10;
        armstrong += power(digit, count);
        num /= 10;
    }

    if(armstrong == original) {
        std::cout << original << " is an armstrong number" << std::endl;
    } else {
        std::cout << original << " is not an armstrong number" << std::endl;
    }
}

int digit_count(int num) {
    int count = 0;

    while(num != 0) {
        count++;
        num /= 10;
    }

    return count;
}

int power(int base, int exponent) {
    int power = 1;

    while(exponent != 0) {
        power *= base;
        exponent--;
    }

    return power;
}