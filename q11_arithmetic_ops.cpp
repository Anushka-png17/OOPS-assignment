/**
 * Question 11: Program to demonstrate arithmetic operators.
 */

#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter two integers for arithmetic operations: ";
    std::cin >> a >> b;

    std::cout << "Addition (a + b): " << (a + b) << std::endl;
    std::cout << "Subtraction (a - b): " << (a - b) << std::endl;
    std::cout << "Multiplication (a * b): " << (a * b) << std::endl;
    
    if (b != 0) {
        std::cout << "Division (a / b): " << (a / b) << std::endl;
        std::cout << "Modulus (a % b): " << (a % b) << std::endl;
    } else {
        std::cout << "Division and Modulus by zero involves undefined behavior." << std::endl;
    }

    return 0;
}
