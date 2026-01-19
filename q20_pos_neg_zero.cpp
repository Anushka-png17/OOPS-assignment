/**
 * Question 20: Program to check if a number is positive/negative/zero.
 */

#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num > 0) {
        std::cout << "The number is Positive." << std::endl;
    } else if (num < 0) {
        std::cout << "The number is Negative." << std::endl;
    } else {
        std::cout << "The number is Zero." << std::endl;
    }

    return 0;
}
