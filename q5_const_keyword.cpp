/**
 * Question 5: Program using const keyword.
 */

#include <iostream>

int main() {
    const int MAX_VALUE = 100;
    
    std::cout << "The constant value is: " << MAX_VALUE << std::endl;

    // Uncommenting the line below would cause a compilation error
    // MAX_VALUE = 200; 

    std::cout << "Cannot modify MAX_VALUE because it is declared as const." << std::endl;

    const float PI = 3.14159;
    std::cout << "Value of PI: " << PI << std::endl;

    return 0;
}
