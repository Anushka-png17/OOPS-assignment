#include <iostream>
using namespace std;

// 27. Program using while loop to print table.
int main() {
    int num, i = 1;
    cout << "Enter a number to print its multiplication table: ";
    cin >> num;

    while (i <= 10) {
        cout << num << " * " << i << " = " << (num * i) << endl;
        i++;
    }
    return 0;
}
