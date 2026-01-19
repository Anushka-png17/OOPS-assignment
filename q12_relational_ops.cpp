/**
 * Question 12: Program to demonstrate relational operators.
 */

#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter two integers to compare: ";
    std::cin >> a >> b;

    std::cout << std::boolalpha; // Print bool as true/false
    std::cout << "a == b is " << (a == b) << std::endl;
    std::cout << "a != b is " << (a != b) << std::endl;
    std::cout << "a > b is " << (a > b) << std::endl;
    std::cout << "a < b is " << (a < b) << std::endl;
    std::cout << "a >= b is " << (a >= b) << std::endl;
    std::cout << "a <= b is " << (a <= b) << std::endl;

    return 0;
}
