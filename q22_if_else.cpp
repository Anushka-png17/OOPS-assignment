/**
 * Question 22: Program using if-else.
 */

#include <iostream>

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    if (num % 2 == 0) {
        std::cout << num << " is Even." << std::endl;
    } else {
        std::cout << num << " is Odd." << std::endl;
    }

    return 0;
}
