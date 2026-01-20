#include <iostream>
using namespace std;

// 120. Program demonstrating object life cycle.
// Showing creation, usage, and destruction.

class LifeCycle {
    int id;
public:
    LifeCycle(int i) : id(i) {
        cout << "Object " << id << " Created (Constructor)" << endl;
    }
    
    ~LifeCycle() {
        cout << "Object " << id << " Destroyed (Destructor)" << endl;
    }
    
    void live() {
        cout << "Object " << id << " is Alive/Working" << endl;
    }
};

void createObjectPool() {
    cout << "Inside Function:" << endl;
    LifeCycle obj2(2); // Local object
    obj2.live();
    // Destructor for obj2 called here
}

int main() {
    cout << "Start of Main:" << endl;
    LifeCycle obj1(1);
    obj1.live();
    
    createObjectPool();
    
    cout << "End of Main" << endl;
    return 0;
    // Destructor for obj1 called here
}
