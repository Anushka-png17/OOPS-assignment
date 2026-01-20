#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 115. Program implementing customer billing system.

class Item {
public:
    string name;
    double price;
    int quantity;
    
    Item(string n, double p, int q) : name(n), price(p), quantity(q) {}
    
    double getTotal() { return price * quantity; }
};

class Bill {
    string customerName;
    vector<Item> items;
public:
    Bill(string name) : customerName(name) {}
    
    void addItem(string n, double p, int q) {
        items.push_back(Item(n, p, q));
    }
    
    void printBill() {
        double total = 0;
        cout << "\n--- Bill for " << customerName << " ---" << endl;
        cout << "Item\tPrice\tQty\tTotal" << endl;
        for (auto& item : items) {
            cout << item.name << "\t" << item.price << "\t" << item.quantity << "\t" << item.getTotal() << endl;
            total += item.getTotal();
        }
        cout << "--------------------------------" << endl;
        cout << "Grand Total: " << total << endl;
    }
};

int main() {
    Bill b("John Smith");
    b.addItem("Apple", 10, 5);
    b.addItem("Milk", 50, 2);
    b.addItem("Bread", 40, 1);
    
    b.printBill();
    return 0;
}
