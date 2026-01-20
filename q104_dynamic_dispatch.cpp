#include <iostream>
using namespace std;

// 104. Program with dynamic method dispatch.
// This is essentially another name/demonstration for Runtime Polymorphism.

class Website {
public:
    virtual void content() {
        cout << "Generic Website Content" << endl;
    }
};

class Blog : public Website {
public:
    void content() {
        cout << "Blog Articles Content" << endl;
    }
};

class Store : public Website {
public:
    void content() {
        cout << "E-commerce Products Content" << endl;
    }
};

int main() {
    Website* site;
    Blog myBlog;
    Store myStore;
    
    site = &myBlog;
    site->content(); // Dispatches to Blog::content
    
    site = &myStore;
    site->content(); // Dispatches to Store::content
    
    return 0;
}
