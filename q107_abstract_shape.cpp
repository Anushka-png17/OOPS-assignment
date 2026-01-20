#include <iostream>
using namespace std;

// 107. Program demonstrating abstract shape class.

class Shape {
public:
    virtual void area() = 0; // Pure virtual function
    virtual void display() {
        cout << "This is a shape." << endl;
    }
};

class Rectangle : public Shape {
    int length, width;
public:
    Rectangle(int l, int w) : length(l), width(w) {}
    
    void area() {
        cout << "Rectangle Area: " << length * width << endl;
    }
};

class Circle : public Shape {
    int radius;
public:
    Circle(int r) : radius(r) {}
    
    void area() {
        cout << "Circle Area: " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Shape* s;
    Rectangle r(10, 5);
    Circle c(7);
    
    s = &r;
    s->area();
    
    s = &c;
    s->area();
    
    return 0;
}
