#include <iostream>
using namespace std;

// 99. Program with virtual function.

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog Barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() {
        cout << "Cat Meows" << endl;
    }
};

int main() {
    Animal *a;
    Dog d;
    Cat c;
    
    a = &d;
    a->sound(); // Output: Dog Barks
    
    a = &c;
    a->sound(); // Output: Cat Meows
    
    return 0;
}
