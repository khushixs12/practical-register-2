#include <iostream>
using namespace std;

class A { 
public:
    virtual void display() = 0; 
};

class B : public A {
public:
    void display() override { 
        cout << "computer" << endl; 
    }
};

int main() {
    B b1; 
    A *aptr = &b1; 
    aptr->display(); 
    return 0; 
}

