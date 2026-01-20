#include <iostream>
using namespace std;

// 59. Program to initialize const data members in constructor.
class ConstDemo {
    const int val;
public:
    // Const member must be initialized using initializer list
    ConstDemo(int v) : val(v) {
        cout << "Const value initialized to: " << val << endl;
    }
};

int main() {
    ConstDemo c(100);
    return 0;
}
