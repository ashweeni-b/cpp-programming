/*
Problem: Reverse an array
Concept: Arrays
*/

#include <iostream>

void reverse_array(int arr[], int n);
void print_array(int arr[], int n);

int main() {
    int size;

    // Input the size of the array
    std::cout << "Enter the array size: ";
    std::cin >> size;

    // Initialization of array 
    int* arr;
    arr = (int*) malloc(size * sizeof(int));

    // Input values of array
    for(int i = 0; i < size; i++) {
        std::cout << "Enter the value for element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    std::cout << std::endl;

    // Print array before reversal
    std::cout << "Array before reversal: ";
    print_array(arr, size);

    // Reversing the array
    reverse_array(arr, size);

    std::cout << std::endl;

    // Print array after reversal
    std::cout << "Array after reversal: ";
    print_array(arr, size);

    return 0;
}

void reverse_array(int arr[], int n) {
    for(int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

void print_array(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
}