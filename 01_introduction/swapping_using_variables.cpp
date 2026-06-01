/*
Problem: Swapping of two numbers using a third variable
Concept: Variables
Approach: Create a temp variable to store a variable
*/

#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Enter num1 and num2: ";
    cin >> num1 >> num2;

    cout << "Numbers before swapping: ";
    cout << num1 << " " << num2;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "\nNumbers after swapping: ";
    cout << num1 << " " << num2;

    return 0;
}