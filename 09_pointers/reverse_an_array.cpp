/*
Problem: Reverse an array
Concept: Pointers
*/

#include <iostream>

int main() {
    int size;

    std::cout << "Enter the size of array: ";
    std::cin >> size;

    // Dynamically allocate memory to array
    int* arr = new int [size];

    // Input the array
    std::cout << "Enter the array elements: ";
    for(int i = 0; i < size; i++) {
        std::cin >> *(arr + i);
    }

    // Display the array
    std::cout << "Array before reversal: ";
    for(int i = 0; i < size; i++) {
        std::cout << *(arr + i) << " ";
    }   

    std::cout << std::endl;

    // Reverse the array
    for(int i = 0; i < size / 2; i++) {
        int temp = *(arr + i);
        *(arr + i) = *(arr + size - i - 1);
        *(arr + size - i - 1) = temp;
    }

    std::cout << "Array after reversal: ";
    for(int i = 0; i < size; i++) {
        std::cout << *(arr + i) << " ";
    }

    return 0;
}