#include <iostream>
using namespace std;

// 36. Program for matrix multiplication.
int main() {
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible (Cols of A != Rows of B)." << endl;
        return 0;
    }

    cout << "Enter elements of first matrix:" << endl;
    for(int i = 0; i < r1; ++i)
        for(int j = 0; j < c1; ++j)
            cin >> a[i][j];

    cout << "Enter elements of second matrix:" << endl;
    for(int i = 0; i < r2; ++i)
        for(int j = 0; j < c2; ++j)
            cin >> b[i][j];

    // Initializing mult matrix to 0
    for(int i = 0; i < r1; ++i)
        for(int j = 0; j < c2; ++j)
            mult[i][j] = 0;

    // Multiplying matrices
    for(int i = 0; i < r1; ++i)
        for(int j = 0; j < c2; ++j)
            for(int k = 0; k < c1; ++k) {
                mult[i][j] += a[i][k] * b[k][j];
            }

    cout << "Product of the matrices:" << endl;
    for(int i = 0; i < r1; ++i)
        for(int j = 0; j < c2; ++j) {
            cout << mult[i][j] << " ";
            if(j == c2 - 1)
                cout << endl;
        }

    return 0;
}
