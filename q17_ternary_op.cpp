/**
 * Question 17: Program Using conditional (ternary) operator.
 */

#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Check if even or odd using ternary operator
    std::string result = (num % 2 == 0) ? "Even" : "Odd";

    std::cout << "The number " << num << " is " << result << "." << std::endl;

    return 0;
}
