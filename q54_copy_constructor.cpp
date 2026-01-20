#include <iostream>
using namespace std;

// 54. Program with copy constructor.
class Sample {
    int id;
public:
    Sample(int i) {
        id = i;
    }
    
    // Copy Constructor
    Sample(const Sample &obj) {
        id = obj.id; // Copying data
        cout << "Copy Constructor Called!" << endl;
    }
    
    void display() {
        cout << "ID: " << id << endl;
    }
};

int main() {
    Sample s1(100);
    s1.display();
    
    Sample s2 = s1; // Calls copy constructor
    s2.display();
    
    return 0;
}
