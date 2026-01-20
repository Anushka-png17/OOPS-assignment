#include <iostream>
#include <string>
using namespace std;

// 118. Program with aggregation of objects.
// Aggregation: "Has-a" relationship where the part CAN exist independently.

class Department {
public:
    string name;
    Department(string n) : name(n) {}
};

class Professor {
    string name;
    Department* dept; // Aggregation: Professor "has a" Department (pointer)
public:
    Professor(string n, Department* d) : name(n), dept(d) {}
    
    void display() {
        cout << "Professor: " << name << ", Department: " << dept->name << endl;
    }
};

int main() {
    Department d("Computer Science"); // Exists independently
    
    Professor p1("Dr. Smith", &d);
    Professor p2("Dr. Jones", &d);
    
    p1.display();
    p2.display();
    
    return 0;
}
