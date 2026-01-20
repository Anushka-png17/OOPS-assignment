#include <iostream>
using namespace std;

// 90. Program resolving ambiguity using scope resolution operator.
class A {
public:
    void show() { cout << "Class A" << endl; }
};

class B {
public:
    void show() { cout << "Class B" << endl; }
};

class C : public A, public B {
public:
    void show() {
        cout << "Class C resolving ambiguity:" << endl;
        A::show(); // Explicitly calling A's show
        B::show(); // Explicitly calling B's show
    }
};

int main() {
    C obj;
    obj.show(); 
    
    // Can also be resolved from outside
    cout << "\nAccessing from main:" << endl;
    obj.A::show();
    obj.B::show();
    return 0;
}
