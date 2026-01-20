#include <iostream>
using namespace std;

// 101. Program showing late binding.
// Late binding (Dynamic Binding) occurs when virtual functions are used.

class Base {
public:
    virtual void show() {
        cout << "Base Show" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived Show" << endl;
    }
};

int main() {
    Base* b;
    Derived d;
    b = &d;
    
    // The decision of which function to call is made at runtime based on the object type
    b->show(); 
    return 0;
}
