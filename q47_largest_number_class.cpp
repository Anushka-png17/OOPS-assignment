#include <iostream>
using namespace std;

// 47. Program to find largest of two numbers using class.
class Largest {
    int n1, n2;
public:
    void input() {
        cout << "Enter two numbers: ";
        cin >> n1 >> n2;
    }
    
    void findMax() {
        if (n1 > n2)
            cout << n1 << " is largest." << endl;
        else if (n2 > n1)
            cout << n2 << " is largest." << endl;
        else
            cout << "Both numbers are equal." << endl;
    }
};

int main() {
    Largest obj;
    obj.input();
    obj.findMax();
    return 0;
}
