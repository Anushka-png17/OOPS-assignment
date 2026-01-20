#include <iostream>
using namespace std;

// 31. Program to input and display array elements.
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100]; // Assuming max size 100
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
