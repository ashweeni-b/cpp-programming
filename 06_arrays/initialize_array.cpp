/*
Problem: Initialize array with -1
Concept: Arrays
Approach:
1. Using for loop
2. Using memset library function
*/

#include <iostream>
#include <cstring>

void init_using_loops(int arr[], int n);
void print_array(int arr[], int n);

int main() {
    int arr1[10], arr2[10];

    // Initializing array 1 with -1
    // Using loopsg++
    init_using_loops(arr1, 10);

    print_array(arr1, 10);

    std::cout << std::endl;

    // Initializing array 2 with -1
    // Using memset function
    memset(arr2, -1, sizeof(arr2));

    print_array(arr2, 10);

    return 0;
}

void init_using_loops(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        arr[i] = -1;
    }
}

void print_array(int arr[], int n) {
    std::cout << "The array is: ";

    for(int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
}