#include <iostream>
#include <string>
using namespace std;

// 114. Program implementing employee payroll system.

class Employee {
protected:
    int id;
    string name;
    double basicSalary;
public:
    Employee(int i, string n, double s) : id(i), name(n), basicSalary(s) {}
    
    virtual double calculateSalary() = 0; // Pure virtual
    
    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Basic: " << basicSalary << endl;
    }
};

class PermanentEmployee : public Employee {
    double bonus;
public:
    PermanentEmployee(int i, string n, double s, double b) : Employee(i, n, s), bonus(b) {}
    
    double calculateSalary() {
        return basicSalary + bonus;
    }
};

class ContractEmployee : public Employee {
public:
    ContractEmployee(int i, string n, double s) : Employee(i, n, s) {}
    
    double calculateSalary() {
        return basicSalary; // No bonus
    }
};

int main() {
    PermanentEmployee p(1, "Alice", 50000, 5000);
    ContractEmployee c(2, "Bob", 30000);
    
    p.display();
    cout << "Total Salary: " << p.calculateSalary() << endl;
    
    c.display();
    cout << "Total Salary: " << c.calculateSalary() << endl;
    
    return 0;
}
