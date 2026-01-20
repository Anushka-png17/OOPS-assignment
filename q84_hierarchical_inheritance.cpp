#include <iostream>
using namespace std;

// 84. Program for hierarchical inheritance.
class Shape {
public:
    void display() {
        cout << "This is a shape." << endl;
    }
};

class Rectangle : public Shape {
public:
    void drawRect() {
        cout << "Drawing Rectangle" << endl;
    }
};

class Circle : public Shape {
public:
    void drawCircle() {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Rectangle r;
    r.display();
    r.drawRect();
    
    Circle c;
    c.display();
    c.drawCircle();
    return 0;
}
