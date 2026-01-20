#include <iostream>
using namespace std;

// 98. Program demonstrating runtime polymorphism.
// achieved via Virtual Functions and Base class pointers.

class Base {
public:
    virtual void show() { // Virtual function
        cout << "Base Class Show" << endl;
    }
    
    void print() { // Non-virtual
        cout << "Base Class Print" << endl;
    }
};

class Derived : public Base {
public:
    void show() { // Overridden
        cout << "Derived Class Show" << endl;
    }
    
    void print() {
        cout << "Derived Class Print" << endl;
    }
};

int main() {
    Base* bptr;
    Derived d;
    bptr = &d;
    
    // Runtime polymorphism (calls Derived's show because it's virtual)
    bptr->show(); 
    
    // Compile-time binding (calls Base's print because it's non-virtual)
    bptr->print(); 
    
    return 0;
}
