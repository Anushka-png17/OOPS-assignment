#include <iostream>
using namespace std;

// 63. Program with friend function accessing private data.
class Secret {
    int secretValue;
public:
    Secret() {
        secretValue = 42;
    }
    
    // Declaration of friend function
    friend void revealSecret(Secret s);
};

// Definition of friend function
void revealSecret(Secret s) {
    // Accessing private member secretValue directly
    cout << "The secret value is: " << s.secretValue << endl;
}

int main() {
    Secret s;
    revealSecret(s);
    return 0;
}
