#include <iostream>
using namespace std;

// 39. Program demonstrating pointers basic operations.
int main() {
    int var = 20;   // actual variable declaration
    int *ip;        // pointer variable declaration

    ip = &var;      // store address of var in pointer variable

    cout << "Value of var variable: ";
    cout << var << endl;

    cout << "Address stored in ip variable: ";
    cout << ip << endl;

    cout << "Value of *ip variable: ";
    cout << *ip << endl;
    
    // Changing value using pointer
    *ip = 30;
    cout << "New value of var after *ip = 30: " << var << endl;

    return 0;
}
