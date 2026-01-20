#include <iostream>
using namespace std;

// 30. Program to show use of goto.
int main() {
    int num;
    cout << "Enter a positive number: ";
    cin >> num;

    if (num < 0) {
        goto error;
    }

    cout << "You entered: " << num << endl;
    return 0;

error:
    cout << "Error: Negative number entered!" << endl;
    return 1;
}
