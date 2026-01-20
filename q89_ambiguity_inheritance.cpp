#include <iostream>
using namespace std;

// 89. Program showing ambiguity in multiple inheritance.
class A {
public:
    void show() { cout << "Class A" << endl; }
};

class B {
public:
    void show() { cout << "Class B" << endl; }
};

class C : public A, public B {
    // Both A and B have show()
};

int main() {
    C obj;
    // obj.show(); // Error: Ambiguous access
    cout << "Uncommenting obj.show() causes ambiguity error because both A and B have show()." << endl;
    return 0;
}
