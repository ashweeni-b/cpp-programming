/*
Problem: Pointer Arithmetic on Arrays
Concept: Pointers
*/

#include <iostream>

int main() {
    int arr[] = {5, 3, 8, 9, 1};

    int* ptr = arr;

    std::cout << "Array is: ";
    for(int num : arr) {
        std::cout << num << " ";
    }

    std::cout << std::endl;

    std::cout << "Initial pointer is at - *ptr: " << *ptr << std::endl;

    ptr += 2;

    std::cout << "Incrementing pointer by 2 - ptr++: " << *ptr << std::endl;

    ptr--;

    std::cout << "Decrementing pointer by 1 ptr--: " << *ptr << std::endl;

    return 0;
}