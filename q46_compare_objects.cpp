#include <iostream>
using namespace std;

// 46. Program to compare two objects.
class Distance {
    int feet;
    int inches;
public:
    void setDistance(int f, int i) {
        feet = f;
        inches = i;
    }
    
    // Function to compare current object with another object
    void compare(Distance d) {
        int totalInches1 = feet * 12 + inches;
        int totalInches2 = d.feet * 12 + d.inches;
        
        if (totalInches1 > totalInches2)
            cout << "First distance is greater." << endl;
        else if (totalInches1 < totalInches2)
            cout << "Second distance is greater." << endl;
        else
            cout << "Both distances are equal." << endl;
    }
};

int main() {
    Distance d1, d2;
    d1.setDistance(5, 6);
    d2.setDistance(5, 10);
    
    d1.compare(d2);
    return 0;
}
