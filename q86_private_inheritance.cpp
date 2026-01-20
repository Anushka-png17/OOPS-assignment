#include <iostream>
using namespace std;

// 86. Program demonstrating private inheritance.
class Base {
public:
    int pub = 1;
protected:
    int prot = 2;
private:
    int priv = 3;
};

class Derived : private Base {
public:
    void display() {
        cout << "Inside Private Derived Class:" << endl;
        cout << "Public Base Member: " << pub << endl;     // Becomes private in Derived
        cout << "Protected Base Member: " << prot << endl; // Becomes private in Derived
        // cout << "Private Base Member: " << priv << endl; // Error: Not accessible
    }
};

int main() {
    Derived d;
    d.display();
    // cout << d.pub; // Error: pub is private in Derived
    return 0;
}
