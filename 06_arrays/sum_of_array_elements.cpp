/*
Problem: Sum of array elements
Concept: Arrays
*/

#include <iostream>

int main() {
    int arr[5];

    // Input values to the array
    for(int i = 0; i < 5; i++) {
        std::cout << "Enter the value of element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Calculate the sum of array elements and output the array
    int sum = 0;

    std::cout << "The array is: ";
    for(int i = 0; i < 5; i++) {
        sum += arr[i];
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    std::cout << "Sum of array elements: " << sum << std::endl;

    return 0;
}