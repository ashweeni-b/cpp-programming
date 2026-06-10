/*
Problem: Fibonacci series upto n terms
Concept: Loops
*/

#include <iostream>

int main() {
    int num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    std::cout << "Fibonacci series upto " << num << "th terms :" << std::endl;

    int first_term, second_term, third_term;

    first_term = 0, second_term = 1;

    if(num == 0) {
        std::cout << "No Fibonacci series" << std::endl;
    } else if(num == 1) {
        std::cout << first_term << "  ";
    } else {
        std::cout << first_term << "  " << second_term << "  ";
    }

    for(int i = 3; i <= num; i++) {
        third_term = first_term + second_term;

        std::cout << third_term << "  ";

        first_term = second_term;
        second_term = third_term;
    }

    return 0;
}