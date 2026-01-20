#include <iostream>
#include <climits>
using namespace std;

// 33. Program to find second-largest element.
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    if (n < 2) {
        cout << "Invalid input. Need at least 2 elements." << endl;
        return 0;
    }

    int arr[100];
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "No second largest element found (all elements might be equal)." << endl;
    } else {
        cout << "Second largest element is: " << secondLargest << endl;
    }
    return 0;
}
