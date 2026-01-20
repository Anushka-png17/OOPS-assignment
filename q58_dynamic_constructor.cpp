#include <iostream>
using namespace std;

// 58. Program to dynamically allocate memory in constructor.
class DynamicMem {
    int *ptr;
public:
    DynamicMem() {
        ptr = new int; // Dynamic allocation
        *ptr = 10;
        cout << "Memory allocated. Value: " << *ptr << endl;
    }
    
    ~DynamicMem() {
        delete ptr; // Deallocation
        cout << "Memory deallocated." << endl;
    }
};

int main() {
    DynamicMem obj;
    return 0;
}
