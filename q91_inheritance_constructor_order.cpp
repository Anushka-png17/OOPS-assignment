#include <iostream>
using namespace std;

// 91. Program showing constructor order in inheritance.
class Parent {
public:
    Parent() { cout << "Parent Constructor" << endl; }
};

class Child : public Parent {
public:
    Child() { cout << "Child Constructor" << endl; }
};

class GrandChild : public Child {
public:
    GrandChild() { cout << "GrandChild Constructor" << endl; }
};

int main() {
    cout << "Creating GrandChild object:" << endl;
    GrandChild g;
    return 0;
}
