/*
Problem: Access array elements
Concept: Pointers
*/

#include <iostream>

int main() {
    int arr[] = {1, 4, 2, 5, 4};

    int* ptr = arr;

    std::cout << "Array is: ";
    for(int i = 0; i < 5; i++) {
        std::cout << *(ptr + i) << " ";
    }

    return 0;
}