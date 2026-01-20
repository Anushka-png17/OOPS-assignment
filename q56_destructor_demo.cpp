#include <iostream>
using namespace std;

// 56. Program with destructor showing object destruction.
class DestructionDemo {
public:
    DestructionDemo() {
        cout << "Constructor called" << endl;
    }
    
    ~DestructionDemo() {
        cout << "Destructor called (Object destroyed)" << endl;
    }
};

int main() {
    cout << "Entering main scope..." << endl;
    DestructionDemo d;
    
    {
        cout << "Entering inner scope..." << endl;
        DestructionDemo d2;
        cout << "Exiting inner scope..." << endl;
    }
    
    cout << "Exiting main scope..." << endl;
    return 0;
}
