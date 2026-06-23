/*
Problem: Swap two numbers using pointers
Concept: Pointers
*/

#include <iostream>

int swap(int* a, int* b);

int main() {
    int a, b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    std::cout << "Numbers before swapping: " << a << " " << b << std::endl;

    swap(&a, &b);

    std::cout << "Numbers after swapping: " << a << " " << b << std::endl;

    return 0;
}

int swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}