#include <iostream>
using namespace std;

// 29. Program demonstrating break and continue.
int main() {
    cout << "Loop from 1 to 10:" << endl;
    cout << "Skipping 5 (continue) and stopping at 8 (break)." << endl;

    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            cout << "[Skipping 5] ";
            continue;
        }
        if (i == 8) {
            cout << "[Breaking at 8]";
            break;
        }
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
