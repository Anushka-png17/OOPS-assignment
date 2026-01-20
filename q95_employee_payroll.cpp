#include <iostream>
#include <string>
using namespace std;

// 95. Program using inheritance for employee-payroll.

class Employee {
protected:
    string name;
    int id;
public:
    void getEmpDetails() {
        cout << "Enter ID: "; cin >> id;
        cout << "Enter Name: "; cin >> name;
    }
};

class Payroll : public Employee {
    float salary, hra, da, gross;
public:
    void getPayDetails() {
        cout << "Enter Basic Salary: "; cin >> salary;
        hra = 0.2 * salary;
        da = 0.5 * salary;
    }
    
    void calculate() {
        gross = salary + hra + da;
    }
    
    void displaySlip() {
        cout << "\n--- Payslip ---" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << salary << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Gross Salary: " << gross << endl;
    }
};

int main() {
    Payroll p;
    p.getEmpDetails();
    p.getPayDetails();
    p.calculate();
    p.displaySlip();
    return 0;
}
