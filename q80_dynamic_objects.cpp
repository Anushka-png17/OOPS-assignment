#include <iostream>
using namespace std;

// 80. Program dynamic object creation & deletion using new/delete.
class Box {
public:
    Box() {
        cout << "Box Created" << endl;
    }
    ~Box() {
        cout << "Box Destroyed" << endl;
    }
};

int main() {
    // Dynamic object creation
    Box* myBox = new Box(); // Constructor called
    
    // Deletion
    delete myBox; // Destructor called
    
    return 0;
}
