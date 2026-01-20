#include <iostream>
using namespace std;

// 82. Program for multilevel inheritance.
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

class BabyDog : public Dog {
public:
    void weep() {
        cout << "Weeping..." << endl;
    }
};

int main() {
    BabyDog obj;
    obj.eat(); // Base of base
    obj.bark(); // Base
    obj.weep(); // Derived
    return 0;
}
