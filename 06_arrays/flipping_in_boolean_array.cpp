/*
Problem: Flip boolean array
Concept: Arrays
*/

#include <iostream>

void print_array(bool arr[], int n);
void flip_array(bool arr[], int n);

int main() {
    bool arr[] = {0, 1, 1, 0, 1};

    std::cout << "Array before flipping: ";
    print_array(arr, 5);

    flip_array(arr, 5);

    std::cout << std::endl;

    std::cout << "Array after flipping: ";
    print_array(arr, 5);

    return 0;
}

void print_array(bool arr[], int n) {
    for(int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
}

void flip_array(bool arr[], int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            arr[i] = 1;
        } else {
            arr[i] = 0;
        }
    }
}