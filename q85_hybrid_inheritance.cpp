#include <iostream>
using namespace std;

// 85. Program for hybrid inheritance.
// Combination of Hierarchical and Multiple inheritance often leads to Diamond Problem if not handled carefully,
// but here is a simple structure:
// Student -> Test, Sports
// Test, Sports -> Result

class Student {
protected:
    int roll;
public:
    void getRoll(int r) { roll = r; }
    void putRoll() { cout << "Roll No: " << roll << endl; }
};

class Test : public Student {
protected:
    float marks1, marks2;
public:
    void getMarks(float m1, float m2) {
        marks1 = m1;
        marks2 = m2; 
    }
    void putMarks() {
        cout << "Marks: " << marks1 << ", " << marks2 << endl;
    }
};

class Sports {
protected:
    float score;
public:
    void getScore(float s) { score = s; }
    void putScore() { cout << "Sports Score: " << score << endl; }
};

class Result : public Test, public Sports {
    float total;
public:
    void display() {
        total = marks1 + marks2 + score;
        putRoll();
        putMarks();
        putScore();
        cout << "Total Score: " << total << endl;
    }
};

int main() {
    Result res;
    res.getRoll(101);
    res.getMarks(85.5, 90.0);
    res.getScore(88.0);
    res.display();
    return 0;
}
