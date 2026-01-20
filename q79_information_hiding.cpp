#include <iostream>
using namespace std;

// 79. Program demonstrating information hiding.
class Account {
    double balance; // Hidden data (Private)
public:
    Account(double b) {
        if (b > 0) balance = b;
        else balance = 0;
    }
    
    // Controlled access to hidden data
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
    }
    
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }
    
    double getBalance() {
        return balance;
    }
};

int main() {
    Account acc(1000);
    acc.deposit(500);
    acc.withdraw(200);
    cout << "Current Balance: " << acc.getBalance() << endl;
    return 0;
}
