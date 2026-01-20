#include <iostream>
#include <string>
using namespace std;

// 117. Program using multiple classes with composition.
// Composition: "Has-a" relationship where the part cannot exist without the whole.

class Engine {
    string type;
public:
    Engine(string t) : type(t) {
        cout << "Engine Created: " << type << endl;
    }
    ~Engine() {
        cout << "Engine Destroyed" << endl;
    }
    void start() { cout << "Engine Started" << endl; }
};

class Car {
    Engine eng; // Composition: Car has an Engine
     string model;
public:
    Car(string m, string eType) : model(m), eng(eType) {
        cout << "Car Created: " << model << endl;
    }
    ~Car() {
        cout << "Car Destroyed" << endl;
    }
    void move() {
        eng.start();
        cout << "Car is moving" << endl;
    }
};

int main() {
    {
        Car c("Sedan", "V8");
        c.move();
    } // Both Car and its Engine are destroyed here
    return 0;
}
