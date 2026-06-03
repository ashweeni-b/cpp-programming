/*
Problem: Calculate the square and cube of a number
Concept: Mathematics
*/

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    float num;

    cout << "Enter the number: ";
    cin >> num;

    double square, cube;

    square = pow(num, 2);
    cube = pow(num, 3);

    cout << "Square is " << fixed << setprecision(3) << square <<
        " and cube is " << fixed << setprecision(3) << cube << endl;

    return 0;
}