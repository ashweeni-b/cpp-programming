/*
Problem: Smallest array element
Concept: Pointers
*/

 #include <iostream>

 int main() {
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Dynamically allocate memory to array
    int* arr = new int [size];

    // Input the array
    std::cout << "Enter the array elements: ";
    for(int i = 0; i < size; i++) {
        std::cin >> *(arr + i);
    }

    // Output the array
    std::cout << "Array is: ";
    for(int i = 0; i < size; i++) {
        std::cout << *(arr + i) << " ";
    }

    std::cout << std::endl;

    int min = *arr;

    for(int i = 1; i < size; i++) {
        if(*(arr + i) < min) {
            min = *(arr + i);
        }
    }

    std::cout << "Minimum element of array is " << min << std::endl;

    return 0;
 }