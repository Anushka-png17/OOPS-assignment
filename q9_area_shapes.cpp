/**
 * Question 9: Program to compute area of circle, triangle, rectangle.
 */

#include <iostream>
#include <cmath>

int main() {
    int choice;
    const float PI = 3.14159;

    std::cout << "Choose a shape to calculate area:" << std::endl;
    std::cout << "1. Circle" << std::endl;
    std::cout << "2. Rectangle" << std::endl;
    std::cout << "3. Triangle" << std::endl;
    std::cout << "Enter your choice (1-3): ";
    std::cin >> choice;

    switch (choice) {
        case 1: {
            float radius;
            std::cout << "Enter radius of the circle: ";
            std::cin >> radius;
            std::cout << "Area of Circle: " << (PI * radius * radius) << std::endl;
            break;
        }
        case 2: {
            float length, width;
            std::cout << "Enter length of the rectangle: ";
            std::cin >> length;
            std::cout << "Enter width of the rectangle: ";
            std::cin >> width;
            std::cout << "Area of Rectangle: " << (length * width) << std::endl;
            break;
        }
        case 3: {
            float base, height;
            std::cout << "Enter base of the triangle: ";
            std::cin >> base;
            std::cout << "Enter height of the triangle: ";
            std::cin >> height;
            std::cout << "Area of Triangle: " << (0.5 * base * height) << std::endl;
            break;
        }
        default:
            std::cout << "Invalid choice!" << std::endl;
    }

    return 0;
}
