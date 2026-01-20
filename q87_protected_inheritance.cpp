#include <iostream>
using namespace std;

// 87. Program demonstrating protected inheritance.
class Base {
public:
    int pub = 10;
protected:
    int prot = 20;
private:
    int priv = 30;
};

class Derived : protected Base {
public:
    void show() {
        cout << "Inside Protected Derived Class:" << endl;
        cout << "Public Base Member: " << pub << endl;     // Becomes protected
        cout << "Protected Base Member: " << prot << endl; // Remains protected
    }
};

int main() {
    Derived d;
    d.show();
    // cout << d.pub; // Error: pub is protected in Derived
    return 0;
}
