#include <iostream>
using namespace std;

// 69. Program showing "friendship is not mutual".
class ClassA {
    int privateA;
public:
    ClassA() { privateA = 10; }
    friend class ClassB; // ClassB is friend of ClassA
};

class ClassB {
    int privateB;
public:
    ClassB() { privateB = 20; }
    
    void accessA(ClassA& a) {
        cout << "ClassB accessing ClassA private val: " << a.privateA << endl;
    }
    
    // ClassA cannot access ClassB members because friendship is not mutual
};

class ClassC {
public:
    void tryAccess(ClassB& b) {
        // Error: cannot access privateB
        // cout << b.privateB; 
    }
};

int main() {
    ClassA a;
    ClassB b;
    b.accessA(a);
    cout << "Demonstrated: ClassB can access ClassA, but ClassA has no special access to ClassB." << endl;
    return 0;
}
