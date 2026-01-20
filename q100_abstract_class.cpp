#include <iostream>
using namespace std;

// 100. Program with pure virtual function & abstract class.

class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0; 
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    // Shape s; // Error: Cannot instantiate abstract class
    
    Shape* s;
    Circle c;
    Rectangle r;
    
    s = &c;
    s->draw();
    
    s = &r;
    s->draw();
    
    return 0;
}
