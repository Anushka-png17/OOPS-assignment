#include <iostream>
using namespace std;

class ClassB; // Forward declaration

class ClassA {
    int valA;
public:
    ClassA() { valA = 10; }
    friend void showSum(ClassA, ClassB);
};

class ClassB {
    int valB;
public:
    ClassB() { valB = 20; }
    friend void showSum(ClassA, ClassB);
};

// Common friend function accessing private members of both classes
void showSum(ClassA a, ClassB b) {
    cout << "Sum of values from ClassA and ClassB: " << a.valA + b.valB << endl;
}

int main() {
    ClassA objA;
    ClassB objB;
    showSum(objA, objB);
    return 0;
}
