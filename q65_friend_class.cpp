#include <iostream>
using namespace std;

// 65. Program with friend class.
class ClassA {
    int privateVal;
public:
    ClassA() { privateVal = 100; }
    friend class ClassB; // ClassB is a friend of ClassA
};

class ClassB {
public:
    void showSecret(ClassA& a) {
        cout << "ClassB accessing private member of ClassA: " << a.privateVal << endl;
    }
};

int main() {
    ClassA a;
    ClassB b;
    b.showSecret(a);
    return 0;
}
