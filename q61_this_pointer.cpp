#include <iostream>
using namespace std;

// 61. Program demonstrating this pointer.
class ThisDemo {
public:
    void printAddress() {
        cout << "Address of current object (this): " << this << endl;
    }
};

int main() {
    ThisDemo t1, t2;
    cout << "Address of t1: " << &t1 << endl;
    t1.printAddress();
    
    cout << "Address of t2: " << &t2 << endl;
    t2.printAddress();
    return 0;
}
