#include <iostream>
using namespace std;

// 49. Program demonstrating nested classes.
class Outer {
public:
    class Inner {
    public:
        void display() {
            cout << "This is the Inside class." << endl;
        }
    };
    
    void outerDisplay() {
        cout << "This is the Outside class." << endl;
        Inner in; // Create inner class object inside outer
        in.display();
    }
};

int main() {
    Outer out;
    out.outerDisplay();
    
    // Accessing inner class directly needed scope resolution
    Outer::Inner in_obj;
    in_obj.display();
    
    return 0;
}
