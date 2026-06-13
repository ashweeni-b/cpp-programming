/*
Program: Eligibility to Vote
Concept: Functions
*/

#include <iostream>

void eligibility_check(int age);

int main() {
    int age;

    std::cout << "Enter the age: ";
    std::cin >> age;

    eligibility_check(age);

    return 0;
}

void eligibility_check(int age) {
    if(age >= 18) {
        std::cout << "Eligible to vote" << std::endl;
    } else {
        std::cout << "Not eligibile to vote" << std::endl;
    }
}