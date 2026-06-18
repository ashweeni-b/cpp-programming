/*
Problem: Input and print an array
Concept: Arrays
*/

#include <iostream>

int main() {
    int arr[10];

    // Input the values in an array
    for(int i = 0; i < 10; i++) {
        std::cout << "Enter the value of element " << (i + 1) << ": ";
        std::cin >> arr[i]; 
    }

    std::cout << "The array is: ";
    // Output the values in an array
    for(int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}