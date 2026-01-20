#include <iostream>
using namespace std;

// 62. Program to differentiate local & member variables using this.
class Box {
    int length;
public:
    Box(int length) {
        // Name conflict: local variable 'length' hides member variable 'length'
        // Using 'this' pointer to refer to member variable
        this->length = length;
    }
    
    void display() {
        cout << "Length: " << length << endl;
    }
};

int main() {
    Box b(10);
    b.display();
    return 0;
}
