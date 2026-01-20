#include <iostream>
using namespace std;

// 109. Program for static vs dynamic binding.

class Base {
public:
    void staticBind() {
        cout << "Base Static Binding" << endl;
    }
    virtual void dynamicBind() {
        cout << "Base Dynamic Binding" << endl;
    }
};

class Derived : public Base {
public:
    void staticBind() {
        cout << "Derived Static Binding" << endl;
    }
    void dynamicBind() {
        cout << "Derived Dynamic Binding" << endl;
    }
};

int main() {
    Base* ptr = new Derived();
    
    // Static binding: decided at compile time based on pointer type (Base*)
    ptr->staticBind(); 
    
    // Dynamic binding: decided at runtime based on object type (Derived)
    ptr->dynamicBind();
    
    return 0;
}
