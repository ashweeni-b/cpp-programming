/*
Problem: Reversing a number
Concept: Loops
*/

#include <iostream>

int power(int a, int b);
int count(int a);

int main() {
    int num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    int num_count = count(num) - 1;
    int reverse_num = 0;
    int i = num;

    while(i != 0 && num_count >= 0) {
        int digit = i % 10;

        reverse_num = digit * power(10, num_count) + reverse_num;

        i = i / 10;
        num_count--;
    }

    std::cout << "Original number: " << num << std::endl;
    std::cout << "Reverse number: " << reverse_num << std::endl;

    return 0;
}

int count(int a) {
    int num_count = 0;
    while(a != 0) {
        num_count++;
        a = a / 10;
    }

    return num_count;
}

int power(int a, int b) {
    int power = 1;

    for(int i = 0; i < b; i++) {
        power = power * a;
    }

    return power;
}