#include <iostream>
#include <string>
using namespace std;

// 112. Program implementing student result processing using OOP.

class Student {
    string name;
    int marks[5];
    int total;
    float percentage;
public:
    void input() {
        cout << "Enter Name: "; cin >> name;
        cout << "Enter 5 subject marks: ";
        total = 0;
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
            total += marks[i];
        }
        percentage = total / 5.0;
    }
    
    void displayResult() {
        cout << "\n--- Result ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        
        if (percentage >= 40) cout << "Status: Pass" << endl;
        else cout << "Status: Fail" << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.displayResult();
    return 0;
}
