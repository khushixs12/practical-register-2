#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "I am Subhash" << endl;
    }
};

class B : public A {
public:
    void display() {
        A::display(); 
        cout << "I am Sumesh" << endl;
    }
};

int main() {
    A a;
    B b;
    b.display(); 
    return 0;
}

