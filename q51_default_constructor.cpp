#include <iostream>
using namespace std;

// 51. Program with default constructor.
class Demo {
public:
    // Default Constructor
    Demo() {
        cout << "Default Constructor Called!" << endl;
    }
};

int main() {
    Demo d; // Creates object, calls default constructor
    return 0;
}
