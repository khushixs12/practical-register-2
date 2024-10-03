#include <iostream>
using namespace std;

class A {
protected:
    int x, y, z; 
public:
    A() : x(0), y(0), z(0) {} 

    void display() {
        cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    }
};

class B : public A {
public:
    void func1() {
        x = 1; 
        y = 3;
        z = 2;
    }
};

class C : public B {
public:
    void func2() {
        x = 1; 
        y = 2;
        z = 3;
    }
};

void abc(B &b1) {
    b1.x = 20; 
    b1.y = 30;
    b1.z = 30;
}

int main() {
    A a1; 
    B b1; 
    C c1; 

    b1.func1(); 
    b1.display(); 
    c1.func2(); 
    c1.display(); 

    abc(b1); 
    b1.display(); 

    return 0;
}

