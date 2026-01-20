#include <iostream>
using namespace std;

// 50. Program to count number of objects using static variable.
class Counter {
    static int count; // Static variable declaration
public:
    Counter() {
        count++; // Increment count when object created
    }
    
    static void showCount() {
        cout << "Total objects created: " << count << endl;
    }
};

// Initialize static member
int Counter::count = 0;

int main() {
    Counter::showCount(); // 0
    
    Counter c1;
    Counter c2;
    Counter c3;
    
    Counter::showCount(); // 3
    
    return 0;
}
