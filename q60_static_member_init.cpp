#include <iostream>
using namespace std;

// 60. Program to initialize static data members.
class StaticDemo {
public:
    static int count;
    
    StaticDemo() {
        count++;
    }
};

// Initialization of static member outside the class
int StaticDemo::count = 10; 

int main() {
    cout << "Initial static count: " << StaticDemo::count << endl;
    StaticDemo s1, s2;
    cout << "Count after creating 2 objects: " << StaticDemo::count << endl;
    return 0;
}
