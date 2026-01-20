#include <iostream>
using namespace std;

// 103. Program overriding base class function.

class Base {
public:
    void display() {
        cout << "Display Base" << endl;
    }
};

class Derived : public Base {
public:
    // Overriding the base class function
    void display() {
        cout << "Display Derived" << endl;
    }
};

int main() {
    Derived d;
    d.display(); // Calls the overridden function in Derived
    d.Base::display(); // Accessing the hidden base function
    return 0;
}
