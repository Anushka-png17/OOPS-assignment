#include <iostream>
using namespace std;

// 71. Program with static data member.
class Item {
    static int count; // Static member declaration
    int number;
public:
    void getData(int a) {
        number = a;
        count++;
    }
    
    void getCount() {
        cout << "Count: " << count << endl;
    }
};

int Item::count = 0; // Static member definition and initialization

int main() {
    Item a, b, c;
    a.getCount(); // 0
    
    a.getData(100);
    b.getData(200);
    c.getData(300);
    
    cout << "After reading data:" << endl;
    a.getCount(); // 3
    return 0;
}
