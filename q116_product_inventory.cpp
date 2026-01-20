#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 116. Program implementing product inventory OOP model.

class Product {
    int id;
    string name;
    int stock;
public:
    Product(int i, string n, int s) : id(i), name(n), stock(s) {}
    
    int getId() { return id; }
    
    void addStock(int qty) {
        stock += qty;
        cout << "Stock added. New Stock: " << stock << endl;
    }
    
    void sellStock(int qty) {
        if (stock >= qty) {
            stock -= qty;
            cout << "Sold " << qty << " units. Remaining: " << stock << endl;
        } else {
            cout << "Out of Stock!" << endl;
        }
    }
    
    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Stock: " << stock << endl;
    }
};

class Inventory {
    vector<Product> products;
public:
    void addProduct(int id, string name, int stock) {
        products.push_back(Product(id, name, stock));
    }
    
    Product* findProduct(int id) {
        for (auto& p : products) {
            if (p.getId() == id) return &p;
        }
        return NULL;
    }
};

int main() {
    Inventory inv;
    inv.addProduct(101, "Laptop", 10);
    inv.addProduct(102, "Mouse", 50);
    
    Product* p = inv.findProduct(101);
    if (p) {
        p->display();
        p->sellStock(2);
        p->addStock(5);
    }
    
    return 0;
}
