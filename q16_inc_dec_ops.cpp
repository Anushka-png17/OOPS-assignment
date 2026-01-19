/**
 * Question 16: Program demonstrating increment/decrement.
 */

#include <iostream>

int main() {
    int a = 10;
    
    std::cout << "Initial value: " << a << std::endl;

    std::cout << "Post-increment (a++): " << a++ << std::endl; // Prints 10, then a becomes 11
    std::cout << "Value after post-increment: " << a << std::endl;

    std::cout << "Pre-increment (++a): " << ++a << std::endl; // a becomes 12, then prints 12
    
    std::cout << "Post-decrement (a--): " << a-- << std::endl; // Prints 12, then a becomes 11
    std::cout << "Value after post-decrement: " << a << std::endl;

    std::cout << "Pre-decrement (--a): " << --a << std::endl; // a becomes 10, then prints 10

    return 0;
}
