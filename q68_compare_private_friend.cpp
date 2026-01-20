#include <iostream>
using namespace std;

class ClassY; // Forward declaration

// 68. Program to compare private data of two classes using friend.
class ClassX {
    int valX;
public:
    ClassX(int v) : valX(v) {}
    friend void compare(ClassX, ClassY);
};

class ClassY {
    int valY;
public:
    ClassY(int v) : valY(v) {}
    friend void compare(ClassX, ClassY);
};

void compare(ClassX x, ClassY y) {
    if (x.valX > y.valY)
        cout << "ClassX value is greater." << endl;
    else if (y.valY > x.valX)
        cout << "ClassY value is greater." << endl;
    else
        cout << "Both values are equal." << endl;
}

int main() {
    ClassX x(50);
    ClassY y(30);
    compare(x, y);
    return 0;
}
