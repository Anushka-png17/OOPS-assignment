#include <iostream>
using namespace std;

// 42. Program with private and public members.
class AccessSpecifierDemo {
private:
    int privateVar;
public:
    int publicVar;

    void setPrivate(int val) {
        privateVar = val;
    }
    
    void display() {
        cout << "Private Variable: " << privateVar << endl;
        cout << "Public Variable: " << publicVar << endl;
    }
};

int main() {
    AccessSpecifierDemo obj;
    
    // obj.privateVar = 10; // Error: privateVar is private
    obj.setPrivate(10); // Accessing private via public method
    obj.publicVar = 20; // Allowed
    
    obj.display();
    return 0;
}
