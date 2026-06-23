/*
Problem: Find the largest element of the array
Concept: Pointers
*/

#include <iostream>

int main() {
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Dynamically allocate memory to array
    int* arr = new int [size];

    // Input array     
    std::cout << "Enter the array elements: ";
    for(int i = 0; i < size; i++) {
        std::cin >> *(arr + i);
    }

    // Output array
    std::cout << "Array is: ";
    for(int i = 0; i < size; i++) {
        std::cout << *(arr + i) << " ";
    }

    std::cout << std::endl;

    int max = *arr;

    for(int i = 1; i < size; i++) {
        if(*(arr + i) > max) {
            max = *(arr + i);
        }
    }

    std::cout << "Maximum element of array is " << max << std::endl;

    return 0;
}