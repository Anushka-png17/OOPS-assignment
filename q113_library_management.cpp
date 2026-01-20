#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 113. Program implementing library management system.

class Book {
public:
    int id;
    string title;
    string author;
    bool isIssued;
    
    Book(int i, string t, string a) {
        id = i;
        title = t;
        author = a;
        isIssued = false;
    }
    
    void display() {
        cout << "ID: " << id << ", Title: " << title << ", Author: " << author;
        cout << (isIssued ? " [Issued]" : " [Available]") << endl;
    }
};

class Library {
    vector<Book> books;
public:
    void addBook(int id, string title, string author) {
        Book b(id, title, author);
        books.push_back(b);
    }
    
    void issueBook(int id) {
        for (auto& b : books) {
            if (b.id == id) {
                if (!b.isIssued) {
                    b.isIssued = true;
                    cout << "Book Issued Successfully." << endl;
                } else {
                    cout << "Book is already issued." << endl;
                }
                return;
            }
        }
        cout << "Book not found." << endl;
    }
    
    void returnBook(int id) {
        for (auto& b : books) {
            if (b.id == id) {
                b.isIssued = false;
                cout << "Book Returned Successfully." << endl;
                return;
            }
        }
         cout << "Book not found." << endl;
    }
    
    void listBooks() {
        cout << "\n--- Library Catalog ---" << endl;
        for (auto& b : books) {
            b.display();
        }
    }
};

int main() {
    Library lib;
    lib.addBook(1, "The Great Gatsby", "F. Scott Fitzgerald");
    lib.addBook(2, "1984", "George Orwell");
    
    lib.listBooks();
    lib.issueBook(1);
    lib.listBooks();
    lib.returnBook(1);
    lib.listBooks();
    
    return 0;
}
