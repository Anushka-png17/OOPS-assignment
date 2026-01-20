#include <iostream>
using namespace std;

// 106. Program for virtual function call mechanism.
// Demonstrating the concept. Behind the scenes, vptr and vtable are used.

class Base {
public:
    virtual void function1() { cout << "Base Function 1" << endl; }
    virtual void function2() { cout << "Base Function 2" << endl; }
};

class Derived : public Base {
public:
    void function1() { cout << "Derived Function 1" << endl; }
    // function2 is inherited as is
};

int main() {
    Base* b;
    Derived d;
    b = &d;
    
    cout << "Calling functions via Base pointer to Derived object:" << endl;
    
    // vptr -> vtable of Derived -> Derived::function1() address
    b->function1(); 
    
    // vptr -> vtable of Derived -> Base::function2() address (since not overridden)
    b->function2();
    
    cout << "Mechanism uses VTABLE and VPTR implicitly." << endl;
    return 0;
}
