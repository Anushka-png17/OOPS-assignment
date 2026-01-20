#include <iostream>
using namespace std;

// 28. Program using do-while to print number series (e.g., Even numbers)
int main() {
    int n, i = 2;
    cout << "Enter limit N to print even numbers up to N: ";
    cin >> n;

    cout << "Even Numbers Series: ";
    if (n < 2) {
        cout << "None";
    } else {
        do {
            cout << i << " ";
            i += 2;
        } while (i <= n);
    }
    cout << endl;
    return 0;
}
