#include <iostream>
using namespace std;

// 38. Program to copy string manually.
int main() {
    char s1[100], s2[100];
    int i; 
	// using int i here to avoid scope issues in some compilers if declared in for loop header but used outside, 
	// though standard C++ allows redeclaration.
    
    cout << "Enter string s1: ";
    cin.getline(s1, 100);

    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }

    s2[i] = '\0';

    cout << "String s1: " << s1 << endl;
    cout << "String s2 (copied): " << s2 << endl;
    return 0;
}
