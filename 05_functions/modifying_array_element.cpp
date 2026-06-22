/*
Problem: Modify the value of an array element
Concept: Function Call
*/

#include <iostream>

void modify_array_element(int* arr, int position);

int main() {
    int arr[5] = {1, 2, 4, 8, 15};

    std::cout << "Before modifying array is: ";
    for(int element: arr) {
        std::cout << element << " ";
    }

    std::cout << std::endl;

    // Passing array with size and element
    modify_array_element(arr, 3);

    std::cout << "After modifying array is: ";
    for(int element: arr) {
        std::cout << element << " ";
    }

    return 0;
}

void modify_array_element(int* arr, int position) {
    arr[position] = arr[position] + 3;
}