#include <iostream>
using namespace std;

// 110. Program showing implications of polymorphism.
// Example: Object Slicing when not using pointers/references.

class Base {
public:
    virtual void show() { cout << "Base" << endl; }
};

class Derived : public Base {
public:
    void show() { cout << "Derived" << endl; }
};

void callByValue(Base b) { // Receives a copy (slicing occurs)
    b.show();
}

void callByReference(Base& b) { // Receives reference (polymorphism works)
    b.show();
}

int main() {
    Derived d;
    
    cout << "Call by Value (Slicing): ";
    callByValue(d); // Prints "Base"
    
    cout << "Call by Reference (Polymorphism): ";
    callByReference(d); // Prints "Derived"
    
    return 0;
}
