#include <iostream>
using namespace std;

// 108. Program polymorphic array of objects.
// Storing derived class objects in an array of base class pointers.

class Animal {
public:
    virtual void sound() = 0;
};

class Dog : public Animal {
public:
    void sound() { cout << "Woof!" << endl; }
};

class Cat : public Animal {
public:
    void sound() { cout << "Meow!" << endl; }
};

class Cow : public Animal {
public:
    void sound() { cout << "Moo!" << endl; }
};

int main() {
    Animal* barn[3]; // Array of base class pointers
    
    barn[0] = new Dog();
    barn[1] = new Cat();
    barn[2] = new Cow();
    
    for (int i = 0; i < 3; i++) {
        barn[i]->sound();
    }
    
    return 0;
}
