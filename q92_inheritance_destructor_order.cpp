#include <iostream>
using namespace std;

// 92. Program showing destructor order in inheritance.
class Parent {
public:
    Parent() { cout << "Parent Constructor" << endl; }
    ~Parent() { cout << "Parent Destructor" << endl; }
};

class Child : public Parent {
public:
    Child() { cout << "Child Constructor" << endl; }
    ~Child() { cout << "Child Destructor" << endl; }
};

int main() {
    {
        cout << "Creating Child object in scope:" << endl;
        Child c;
    } // Destructors called here
    cout << "Exited scope." << endl;
    return 0;
}
