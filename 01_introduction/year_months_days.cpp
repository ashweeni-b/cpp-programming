/*
Problem: Convert days into year, months and days
Concept: Operators
Approach:
Assumption - 1 year has 365 days and 1 month has 30 days
*/

#include <iostream>

int main() {
    int totalDays;

    std::cout << "Enter total number of days: ";
    std::cin >> totalDays;

    int years = totalDays / 365;
    int months = (totalDays % 365) / 30;
    int days = (totalDays % 365) % 30;
    
    std::cout << "Years: " << years << std::endl;
    std::cout << "Months: " << months << std::endl;
    std::cout << "Days: " << days << std::endl;

    return 0;
}