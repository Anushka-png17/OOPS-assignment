#include <iostream>
using namespace std;

// 57. Program to show order of constructor execution.
class Base {
public:
    Base() {
        cout << "Base Class Constructor" << endl;
    }
    ~Base() {
        cout << "Base Class Destructor" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived Class Constructor" << endl;
    }
    ~Derived() {
        cout << "Derived Class Destructor" << endl;
    }
};

int main() {
    cout << "Creating Derived object:" << endl;
    Derived d;
    cout << "Exiting main (Destruction starts):" << endl;
    return 0;
}
