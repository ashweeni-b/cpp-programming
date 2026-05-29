/*
Problem: Input two numbers from the user and output their sum
Concept: Input Output
*/

#include<iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter number 2: ";
    cin >> num2;

    int sum = num1 + num2;

    cout << "Sum of " << num1 << " and " << num2 << " is " << sum << endl;

    return 0;
}