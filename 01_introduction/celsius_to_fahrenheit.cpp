/*
Problem: Conversion of temperature from Celsius to Fahrenheit
Concept: Input Output and Mathematics
Approach: F = (9 / 5) * C + 32
*/

#include <iostream>
#include <iomanip>

int main() {
    float temp;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    float fahrenheit = (9.0 / 5.0) * temp + 32.0;

    std::cout << std::fixed << std::setprecision(3) << temp << 
        " degree Celsius equals " << std::fixed << std::setprecision(3)
        << fahrenheit << " degree Fahrenheit" << std::endl;
        
    return 0;
}