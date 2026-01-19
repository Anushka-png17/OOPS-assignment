/**
 * Question 19: Program to check leap year.
 */

#include <iostream>

int main() {
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;

    // Leap year logic:
    // Divisible by 4 AND (NOT divisible by 100 OR divisible by 400)
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << year << " is a Leap Year." << std::endl;
    } else {
        std::cout << year << " is NOT a Leap Year." << std::endl;
    }

    return 0;
}
