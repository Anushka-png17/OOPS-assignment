#include <iostream>
using namespace std;

// 78. Program implementing ADT Polynomial (Simple addition representation).
// Only for terms with same variable x.

struct Term {
    int coeff;
    int exp;
};

class Polynomial {
    Term terms[10];
    int count;
public:
    Polynomial() { count = 0; }
    
    void addTerm(int c, int e) {
        if (count < 10) {
            terms[count].coeff = c;
            terms[count].exp = e;
            count++;
        }
    }
    
    void display() {
        for (int i = 0; i < count; i++) {
            cout << terms[i].coeff << "x^" << terms[i].exp;
            if (i < count - 1) cout << " + ";
        }
        cout << endl;
    }
};

int main() {
    Polynomial p;
    p.addTerm(3, 2);
    p.addTerm(4, 1);
    p.addTerm(5, 0);
    
    cout << "Polynomial: ";
    p.display();
    return 0;
}
