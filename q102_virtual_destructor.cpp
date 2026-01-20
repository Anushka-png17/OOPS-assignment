#include <iostream>
using namespace std;

// 102. Program with virtual destructor.
// Ensures proper cleanup of derived class resources when deleting via base pointer.

class Base {
public:
    Base() { cout << "Base Constructor" << endl; }
    virtual ~Base() { cout << "Base Destructor" << endl; }
};

class Derived : public Base {
public:
    Derived() { cout << "Derived Constructor" << endl; }
    ~Derived() { cout << "Derived Destructor" << endl; }
};

int main() {
    Base* b = new Derived();
    delete b; // Calls Derived destructor then Base destructor
    return 0;
}
