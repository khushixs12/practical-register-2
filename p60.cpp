#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "Subhash loves India" << endl;
    }
};

class B : public A {
public:
    void display() {
        cout << "Subhash loves Dosa" << endl;
    }
};

int main() {
    A a;
    B b;
    B *bp;
    bp = &b; 
    bp->display(); 

    return 0;
}

