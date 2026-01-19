/**
 * Question 21: Program using simple if.
 */

#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    // Simple if statement
    if (age >= 18) {
        std::cout << "You are eligible to vote." << std::endl;
    }

    std::cout << "Program End." << std::endl;

    return 0;
}
