#include <iostream>
using namespace std;

class Class2; // Forward declaration

// 70. Program using friend to swap private values.
class Class1 {
    int val1;
public:
    Class1(int v) : val1(v) {}
    void display() { cout << "Class1 Value: " << val1 << endl; }
    friend void exchange(Class1&, Class2&);
};

class Class2 {
    int val2;
public:
    Class2(int v) : val2(v) {}
    void display() { cout << "Class2 Value: " << val2 << endl; }
    friend void exchange(Class1&, Class2&);
};

void exchange(Class1& c1, Class2& c2) {
    int temp = c1.val1;
    c1.val1 = c2.val2;
    c2.val2 = temp;
}

int main() {
    Class1 c1(10);
    Class2 c2(20);
    
    cout << "Before Swap:" << endl;
    c1.display();
    c2.display();
    
    exchange(c1, c2);
    
    cout << "\nAfter Swap:" << endl;
    c1.display();
    c2.display();
    
    return 0;
}
