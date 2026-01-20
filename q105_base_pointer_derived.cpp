#include <iostream>
using namespace std;

// 105. Program with pointer to base class calling derived function.
// Note: Base pointer can only call virtual functions or base class functions. 
// To call a purely derived function, we need casting on the pointer.

class Base {
public:
    virtual void show() { cout << "Base Show" << endl; }
};

class Derived : public Base {
public:
    void show() { cout << "Derived Show" << endl; }
    void specialized() { cout << "Derived Specialized Function" << endl; }
};

int main() {
    Base* bptr;
    Derived d;
    bptr = &d;
    
    bptr->show(); // Calls Derived::show via virtual mechanism
    
    // bptr->specialized(); // Error: Base pointer cannot see derived-specific methods directly
    
    // Using static_cast to call specialized function (Unsafe if not sure of type)
    Derived* dptr = static_cast<Derived*>(bptr);
    dptr->specialized();
    
    return 0;
}
