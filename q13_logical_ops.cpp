/**
 * Question 13: Program to demonstrate logical operators.
 */

#include <iostream>

int main() {
    bool x = true;
    bool y = false;

    std::cout << std::boolalpha;
    std::cout << "x = " << x << ", y = " << y << std::endl;
    
    std::cout << "Logical AND (x && y): " << (x && y) << std::endl;
    std::cout << "Logical OR (x || y): " << (x || y) << std::endl;
    std::cout << "Logical NOT (!x): " << (!x) << std::endl;
    std::cout << "Logical NOT (!y): " << (!y) << std::endl;

    return 0;
}
