#include <iostream>
using namespace std;

// 88. Program to access base class members using derived class.
class Base {
public:
    void greet() {
        cout << "Hello from Base!" << endl;
    }
};

class Derived : public Base {
public:
    void greet() {
        cout << "Hello from Derived!" << endl;
    }
    
    void callBase() {
        // Accessing overridden base member
        Base::greet();
    }
};

int main() {
    Derived d;
    d.greet();       // Calls Derived's greet
    d.callBase();    // Calls Base's greet via method
    d.Base::greet(); // Calls Base's greet directly using scope resolution
    return 0;
}
