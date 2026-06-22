/*
Problem: Modify variables by multiple of 5 and multiple of 10
Concept: Function Call
*/

#include <iostream>

void modify_variables(int* a, int* b);

int main() {
    int x = 3, y = 8;

    std::cout << "Values before modifying - x: " << x << " and y: " << y << std::endl;

    modify_variables(&x, &y);

    std::cout << "Values after modifying - x: " << x << " and y: " << y << std::endl;

    return 0;
}

void modify_variables(int* a, int* b) {
    *a = (*a) * 5;
    *b = (*b) * 10;
}