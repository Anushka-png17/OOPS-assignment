#include <iostream>
using namespace std;

// 40. Program using structure to store student details.
struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student s;

    cout << "Enter student name: ";
    cin.getline(s.name, 50);
    cout << "Enter roll number: ";
    cin >> s.rollNo;
    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "\nDisplaying Information," << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.rollNo << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}
