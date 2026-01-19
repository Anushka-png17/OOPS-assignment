/**
 * Question 15: Program to demonstrate bitwise operators.
 */

#include <iostream>

int main() {
    // 5 = 0101, 9 = 1001
    int a = 5, b = 9;

    std::cout << "a = " << a << ", b = " << b << std::endl;

    std::cout << "Bitwise AND (a & b): " << (a & b) << std::endl; // 0001 = 1
    std::cout << "Bitwise OR (a | b): " << (a | b) << std::endl;  // 1101 = 13
    std::cout << "Bitwise XOR (a ^ b): " << (a ^ b) << std::endl; // 1100 = 12
    std::cout << "Bitwise NOT (~a): " << (~a) << std::endl;       // -(a+1) = -6

    std::cout << "Left Shift (a << 1): " << (a << 1) << std::endl; // 1010 = 10
    std::cout << "Right Shift (b >> 1): " << (b >> 1) << std::endl; // 0100 = 4

    return 0;
}
