/*
Problem: Prime numbers in a range
Concept: Loops
*/

#include <iostream>

int main() {
    int start, end;

    std::cout << "Enter the starting number: ";
    std::cin >> start;

    std::cout << "Enter the ending number: ";
    std::cin >> end;

    std::cout << "Prime numbers from " << start << " to " << end << " are as follows: " << std::endl;

    for(int i = start; i <= end; i++) {
        int divisor = 0;
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                divisor++;
            }
        }

        if(divisor == 0) {
            std::cout << i << "  ";
        } else {
            continue;
        }
    }

    return 0;
}