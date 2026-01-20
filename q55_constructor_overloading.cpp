#include <iostream>
using namespace std;

// 55. Program to demonstrate constructor overloading.
class Complex {
    float real, imag;
public:
    // Constructor with no args
    Complex() {
        real = 0;
        imag = 0;
    }
    
    // Constructor with one arg
    Complex(float r) {
        real = r;
        imag = 0;
    }
    
    // Constructor with two args
    Complex(float r, float i) {
        real = r;
        imag = i;
    }
    
    void show() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1;
    Complex c2(5.5);
    Complex c3(4.2, 3.1);
    
    c1.show();
    c2.show();
    c3.show();
    return 0;
}
