/**
 * Question 3: Program to swap two numbers using a third variable.
 */

#include <iostream>

int main() {
    int a, b, temp;

    std::cout << "Enter first number (a): ";
    std::cin >> a;
    std::cout << "Enter second number (b): ";
    std::cin >> b;

    std::cout << "\nBefore swapping: a = " << a << ", b = " << b << std::endl;

    // Swapping logic using a third variable
    temp = a;
    a = b;
    b = temp;

    std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;

    return 0;
}
