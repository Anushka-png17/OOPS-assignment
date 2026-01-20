#include <iostream>
using namespace std;

// 26. Program using for loop to print series (e.g., 1 to N)
int main() {
    int n;
    cout << "Enter the limit N to print series 1 to N: ";
    cin >> n;

    cout << "Series: ";
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
