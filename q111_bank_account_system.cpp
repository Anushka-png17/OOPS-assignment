#include <iostream>
#include <string>
using namespace std;

// 111. Program implementing bank account system using OOP.

class BankAccount {
    int accNum;
    string holderName;
    double balance;
public:
    BankAccount(int acc, string name, double bal) {
        accNum = acc;
        holderName = name;
        balance = bal;
    }
    
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << ". New Balance: " << balance << endl;
    }
    
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient Funds!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << ". Remaining Balance: " << balance << endl;
        }
    }
    
    void display() {
        cout << "Acc: " << accNum << ", Name: " << holderName << ", Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc(101, "John Doe", 5000.0);
    acc.display();
    acc.deposit(1500.0);
    acc.withdraw(2000.0);
    acc.withdraw(10000.0);
    return 0;
}
