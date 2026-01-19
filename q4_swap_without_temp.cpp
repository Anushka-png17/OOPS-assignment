/**
 * Question 4: Program to swap two numbers without a third variable.
 */

#include <iostream>

int main() {
    int a, b;

    std::cout << "Enter first number (a): ";
    std::cin >> a;
    std::cout << "Enter second number (b): ";
    std::cin >> b;

    std::cout << "\nBefore swapping: a = " << a << ", b = " << b << std::endl;

    // Swapping logic without a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;

    return 0;
}
