#include <iostream>
using namespace std;

// 74. Program with constant member function.
class Number {
    int val;
public:
    Number(int v) : val(v) {}
    
    void update(int v) {
        val = v; // Allowed
    }
    
    // Constant member function cannot modify data members
    void show() const {
        // val = 20; // Error if uncommented
        cout << "Value: " << val << endl;
    }
};

int main() {
    Number n(10);
    n.show();
    n.update(20);
    n.show();
    return 0;
}
