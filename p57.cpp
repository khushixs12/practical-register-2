#include <iostream>
using namespace std;

class A {
private:
    int x;

public:
    A(int p = 0); // Constructor with a default value
    int ret_x() {
        return x;
    }
    void set_x(int value) {
        x = value;
    }
};

A::A(int p) {
    cout << "Base class constructor" << endl;
    x = p;
    cout << "x = " << x << endl;
}

class B : public A {
private:
    int y;

public:
    B(int p); // Constructor for class B
    int ret_y() {
        return y;
    }
    void set_y(int value) {
        y = value;
    }
};

B::B(int p) : A(p) { 
    cout << "Derived class constructor" << endl;
    y = p;
    cout << "y = " << y << endl;
}

int main() {
    B b1(10); 
    cout << b1.ret_x() << endl; 

    b1.set_x(6); 
    cout << b1.ret_x() << endl; 

    cout << b1.ret_y() << endl; 
    b1.set_y(3); 
    cout << b1.ret_y() << endl; 

    return 0;
}

