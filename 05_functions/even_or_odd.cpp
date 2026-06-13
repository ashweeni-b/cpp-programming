/*
Problem: Even or Odd Check
Concept: Functions
*/

#include <iostream>

void even_odd_check(int a);

int main() {
    int num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    even_odd_check(num);

    return 0;
}

void even_odd_check(int a) {
    if(a % 2 == 0) {
        std::cout << "Even" << std::endl;
    } else {
        std::cout << "Odd" << std::endl;
    }
}