#include <iostream>
using namespace std;

// 41. Program defining a simple class and creating objects.
class Simple {
public:
    void display() {
        cout << "This is a simple class method." << endl;
    }
};

int main() {
    Simple obj; // Creating object
    obj.display(); // Calling method
    return 0;
}
