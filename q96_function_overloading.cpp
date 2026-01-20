#include <iostream>
using namespace std;

// 96. Program demonstrating function overloading.

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    
    int add(int a, int b, int c) {
        return a + b + c;
    }
    
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    cout << "Add 2 ints (10, 20): " << calc.add(10, 20) << endl;
    cout << "Add 3 ints (10, 20, 30): " << calc.add(10, 20, 30) << endl;
    cout << "Add 2 doubles (5.5, 2.5): " << calc.add(5.5, 2.5) << endl;
    return 0;
}
