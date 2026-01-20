#include <iostream>
using namespace std;

// 73. Program with constant object.
class Time {
    int h, m, s;
public:
    Time(int hh, int mm, int ss) {
        h = hh; m = mm; s = ss;
    }
    
    // Const member function (required for const object to call)
    void show() const {
        cout << h << ":" << m << ":" << s << endl;
    }
};

int main() {
    const Time t1(12, 30, 45); // Constant object
    t1.show();
    
    // t1.h = 10; // Error: cannot modify const object
    return 0;
}
