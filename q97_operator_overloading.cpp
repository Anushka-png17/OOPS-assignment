#include <iostream>
using namespace std;

// 97. Program demonstrating operator overloading.
// Overloading unary minus (-)

class Space {
    int x, y, z;
public:
    Space(int a, int b, int c) {
        x = a; y = b; z = c;
    }
    
    void display() {
        cout << "x=" << x << " y=" << y << " z=" << z << endl;
    }
    
    // Overloading unary minus
    void operator-() {
        x = -x;
        y = -y;
        z = -z;
    }
};

int main() {
    Space s(10, -20, 30);
    cout << "Original: ";
    s.display();
    
    -s; // Activates operator-()
    
    cout << "After negation: ";
    s.display();
    return 0;
}
