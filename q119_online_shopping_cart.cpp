#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 119. Program implementing online shopping cart (OOP).

class Product {
public:
    string name;
    double price;
    
    Product(string n, double p) : name(n), price(p) {}
};

class Cart {
    vector<Product> items;
public:
    void add(Product p) {
        items.push_back(p);
        cout << p.name << " added to cart." << endl;
    }
    
    void checkout() {
        double total = 0;
        cout << "\n--- Checkout ---" << endl;
        for (auto& item : items) {
            cout << item.name << ": " << item.price << endl;
            total += item.price;
        }
        cout << "Total Payable: " << total << endl;
        items.clear();
    }
};

int main() {
    Cart c;
    c.add(Product("Shoes", 50.0));
    c.add(Product("Shirt", 20.0));
    c.checkout();
    return 0;
}
