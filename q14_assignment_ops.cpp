/**
 * Question 14: Program to demonstrate assignment operators.
 */

#include <iostream>

int main() {
    int a = 10;

    std::cout << "Initial value of a: " << a << std::endl;

    a += 5; // a = a + 5
    std::cout << "After a += 5: " << a << std::endl;

    a -= 3; // a = a - 3
    std::cout << "After a -= 3: " << a << std::endl;

    a *= 2; // a = a * 2
    std::cout << "After a *= 2: " << a << std::endl;

    a /= 4; // a = a / 4
    std::cout << "After a /= 4: " << a << std::endl;

    a %= 3; // a = a % 3
    std::cout << "After a %= 3: " << a << std::endl;

    return 0;
}
