#include <iostream>
using namespace std;

// 48. Program to calculate area using class object.
class ShapeArea {
public:
    void rectangle(float l, float w) {
        cout << "Area of Rectangle: " << l * w << endl;
    }
    
    void circle(float r) {
        cout << "Area of Circle: " << 3.14159 * r * r << endl;
    }
};

int main() {
    ShapeArea s;
    s.rectangle(10, 5);
    s.circle(7);
    return 0;
}
