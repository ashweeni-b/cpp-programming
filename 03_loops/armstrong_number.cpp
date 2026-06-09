/*
Problem: Armstrong Number
Concept: Loops
*/

#include <iostream>

int count(int a);
int power(int a, int b);

int main() {
    int num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    int i = num;
    int armstrong = 0;
    
    while(i != 0) {
        int digit = i % 10;

        armstrong = power(digit, count(num)) + armstrong;

        i = i / 10;
    }

    if(num == armstrong) {
        std::cout << num << " is an armstrong number" << std::endl;
    } else {
        std::cout << num << " is not an armstrong number" << std::endl;
    }

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
        power = a * power;
    }

    return power;
}