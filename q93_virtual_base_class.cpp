#include <iostream>
using namespace std;

// 93. Program for virtual base class.
// Solves the Diamond Problem.

class Person {
public:
    void display() {
        cout << "I am a Person." << endl;
    }
};

// Virtual inheritance to prevent multiple copies of Person in Student
class Father : virtual public Person {
};

class Mother : virtual public Person {
};

class Child : public Father, public Mother {
};

int main() {
    Child c;
    c.display(); // Unambiguous because of virtual inheritance
    return 0;
}
