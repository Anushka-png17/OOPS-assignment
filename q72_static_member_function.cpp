#include <iostream>
using namespace std;

// 72. Program with static member function.
class Test {
    int code;
    static int count; // Static data
public:
    void setCode() {
        code = ++count;
    }
    
    void showCode() {
        cout << "Object number: " << code << endl;
    }
    
    // Static member function
    static void showCount() {
        cout << "Count: " << count << endl;
    }
};

int Test::count = 0;

int main() {
    Test t1, t2;
    t1.setCode();
    t2.setCode();
    
    Test::showCount(); // Accessing static function
    
    Test t3;
    t3.setCode();
    
    Test::showCount();
    t1.showCode();
    t2.showCode();
    t3.showCode();
    return 0;
}
