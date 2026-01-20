#include <iostream>
#include <string>
using namespace std;

// 94. Program using inheritance for student mark processing.

class Student {
protected:
    string name;
    int roll;
public:
    void getDetails() {
        cout << "Enter Name: "; cin >> name;
        cout << "Enter Roll: "; cin >> roll;
    }
};

class Marks : public Student {
protected:
    int m1, m2, m3;
public:
    void getMarks() {
        cout << "Enter Marks for 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }
};

class Result : public Marks {
    int total;
    float avg;
public:
    void display() {
        total = m1 + m2 + m3;
        avg = total / 3.0;
        cout << "\n--- Student Report ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Total: " << total << endl;
        cout << "Average: " << avg << endl;
    }
};

int main() {
    Result r;
    r.getDetails();
    r.getMarks();
    r.display();
    return 0;
}
