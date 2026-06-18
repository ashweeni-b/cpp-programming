/*
Problem: Multiple of 10
Concept: Arrays
*/

#include <iostream>

void print_array(int arr[], int n);
void multiple_of_10(int arr[], int n);

int main() {
    int arr[10];

    multiple_of_10(arr, 10);

    print_array(arr, 10);

    return 0;
}

void multiple_of_10(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10;
    }
}

void print_array(int arr[], int n) {
    std::cout << "The array is: ";
    for(int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
}