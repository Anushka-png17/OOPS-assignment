#include <iostream>
using namespace std;

// 83. Program for multiple inheritance.
class Mammal {
public:
    void breathe() {
        cout << "Breathing..." << endl;
    }
};

class WingedAnimal {
public:
    void fly() {
        cout << "Flying..." << endl;
    }
};

// Inherits from both Mammal and WingedAnimal
class Bat : public Mammal, public WingedAnimal {
public:
    void hang() {
        cout << "Hanging upside down..." << endl;
    }
};

int main() {
    Bat b;
    b.breathe(); // From Mammal
    b.fly();     // From WingedAnimal
    b.hang();    // Own method
    return 0;
}
