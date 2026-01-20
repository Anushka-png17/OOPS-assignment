#include <iostream>
using namespace std;

// 45. Program to perform arithmetic operations using class.
class Arithmetic {
    float a, b;
public:
    void getNumbers() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void add() { cout << "Addition: " << a + b << endl; }
    void subtract() { cout << "Subtraction: " << a - b << endl; }
    void multiply() { cout << "Multiplication: " << a * b << endl; }
    void divide() {
        if (b != 0)
            cout << "Division: " << a / b << endl;
        else
            cout << "Division by zero error!" << endl;
    }
};

int main() {
    Arithmetic obj;
    obj.getNumbers();
    obj.add();
    obj.subtract();
    obj.multiply();
    obj.divide();
    return 0;
}
