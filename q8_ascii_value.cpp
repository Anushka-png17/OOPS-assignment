/**
 * Question 8: Program to find ASCII value of a character.
 */

#include <iostream>

int main() {
    char ch;

    std::cout << "Enter a character: ";
    std::cin >> ch;

    // Casting character to int gives its ASCII value
    std::cout << "ASCII value of " << ch << " is " << (int)ch << std::endl;

    return 0;
}
