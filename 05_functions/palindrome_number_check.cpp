/*
Problem: Palindrome Number Check
Concept: Functions
*/

#include <iostream>

int digit_count(int num);
int power(int base, int exponent);
int reverse_number(int num);

int main() {
    int num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    int reverse_num = reverse_number(num);

    if(reverse_num == num) {
        std::cout << num << " is a palindrome number" << std::endl;
    } else {
        std::cout << num << " is not a palindrome number" << std::endl;
    }

    return 0;
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

int reverse_number(int num) {
    int reverse_num = 0;
    int exponent = digit_count(num) - 1;

    while(num != 0) {
        int digit = num % 10;
        reverse_num += digit * power(10, exponent);
        num /= 10;
        exponent--;
    }

    return reverse_num;
}