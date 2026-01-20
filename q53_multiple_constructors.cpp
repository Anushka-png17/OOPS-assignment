#include <iostream>
using namespace std;

// 53. Program with multiple constructors (Overloading concept essentially).
class Rectangle {
    int width, height;
public:
    // Default Constructor
    Rectangle() {
        width = 0;
        height = 0;
        cout << "Default Constructor called" << endl;
    }
    
    // Parameterized Constructor
    Rectangle(int w, int h) {
        width = w;
        height = h;
        cout << "Parameterized Constructor called" << endl;
    }
    
    void area() {
        cout << "Area: " << width * height << endl;
    }
};

int main() {
    Rectangle r1;
    r1.area();
    
    Rectangle r2(5, 10);
    r2.area();
    
    return 0;
}
