/**
 * Question 10: Program to demonstrate type casting.
 */

#include <iostream>

int main() {
    // Implicit Type conversion
    int num_int = 10;
    double num_double;

    num_double = num_int; // Implicit conversion from int to double
    std::cout << "Implicit conversion (int to double): " << num_double << std::endl;

    // Explicit Type Casting
    double myDouble = 9.78;
    int myInt;

    // C-style casting
    myInt = (int)myDouble; 
    std::cout << "Explicit C-style casting (double 9.78 to int): " << myInt << std::endl;

    // C++ functional notation
    int myInt2 = int(myDouble);
    std::cout << "Explicit functional casting (double 9.78 to int): " << myInt2 << std::endl;
    
    // static_cast (Preferred C++ style)
    int myInt3 = static_cast<int>(myDouble);
    std::cout << "Explicit static_cast (double 9.78 to int): " << myInt3 << std::endl;

    return 0;
}
