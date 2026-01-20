#include <iostream>
using namespace std;

// 67. Program to add two complex numbers using friend.
class Complex {
    float real, imag;
public:
    Complex(float r, float i) : real(r), imag(i) {}
    Complex() : real(0), imag(0) {}
    
    void display() { cout << real << " + " << imag << "i" << endl; }
    
    friend Complex addComplex(Complex c1, Complex c2);
};

Complex addComplex(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1(3.5, 2.5), c2(1.5, 4.5);
    cout << "Complex 1: "; c1.display();
    cout << "Complex 2: "; c2.display();
    
    Complex c3 = addComplex(c1, c2);
    cout << "Sum: "; c3.display();
    return 0;
}
