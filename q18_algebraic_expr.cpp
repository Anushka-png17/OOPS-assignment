/**
 * Question 18: Program to evaluate an algebraic expression.
 * Evaluating: ax^2 + bx + c
 */

#include <iostream>

int main() {
    float a, b, c, x, result;

    std::cout << "Evaluate expression: ax^2 + bx + c" << std::endl;
    std::cout << "Enter value for a: ";
    std::cin >> a;
    std::cout << "Enter value for b: ";
    std::cin >> b;
    std::cout << "Enter value for c: ";
    std::cin >> c;
    std::cout << "Enter value for x: ";
    std::cin >> x;

    result = (a * x * x) + (b * x) + c;

    std::cout << "Result of " << a << "(" << x << ")^2 + " << b << "(" << x << ") + " << c << " = " << result << std::endl;

    return 0;
}
