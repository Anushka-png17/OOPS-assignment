/**
 * Question 6: Program to calculate simple interest.
 */

#include <iostream>

int main() {
    float principal, rate, time, interest;

    std::cout << "Enter Principal amount: ";
    std::cin >> principal;

    std::cout << "Enter Rate of interest (in %): ";
    std::cin >> rate;

    std::cout << "Enter Time (in years): ";
    std::cin >> time;

    // Formula for Simple Interest
    interest = (principal * rate * time) / 100;

    std::cout << "Simple Interest = " << interest << std::endl;

    return 0;
}
