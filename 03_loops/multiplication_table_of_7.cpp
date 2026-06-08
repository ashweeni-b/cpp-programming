/*
Problem: Print multiplication table of 7
Concept: Loops
*/

#include <iostream>

int main() {
    for(int i = 1; i <= 10; i++) {
        std::cout << "7 * " << i <<  " = " << i * 7 << std::endl;
    }

    return 0;
}