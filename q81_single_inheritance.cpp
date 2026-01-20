#include <iostream>
using namespace std;

// 81. Program for single inheritance.
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

int main() {
    Dog d;
    d.eat(); // Accessing base class method
    d.bark();
    return 0;
}
