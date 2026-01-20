#include <iostream>
using namespace std;

// 52. Program with parameterized constructor.
class Point {
    int x, y;
public:
    // Parameterized Constructor
    Point(int a, int b) {
        x = a;
        y = b;
    }
    
    void display() {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p(10, 20); // Passing arguments
    p.display();
    return 0;
}
