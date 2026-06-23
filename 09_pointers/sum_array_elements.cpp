/*
Problem: Sum of array elements
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
        std::cin >> arr[i]; 
    }

    // Display array
    std::cout << "Array is: ";
    for(int i  = 0; i < size; i++) {
        std::cout << *(arr + i) << " ";
    }

    std::cout << std::endl;
    
    int sum = 0;

    for(int i = 0; i < size; i++) {
        sum += *(arr + i);
    }

    std::cout << "Sum of array elements is " << sum << std::endl;

    return 0;
}