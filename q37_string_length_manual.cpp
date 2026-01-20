#include <iostream>
using namespace std;

// 37. Program for string length without using library function.
int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    cout << "Length of the string is: " << length << endl;
    return 0;
}
