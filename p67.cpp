#include <iostream>
using namespace std;

class A {
private:
    int a, b; 

public:
    
    A() {}

    
    A(int x) {
        a = x + 5;
        b = x + 6;
    }


    void display() {
        cout << "a = " << a << endl; 
        cout << "b = " << b << endl; 
    }
};

int main() {
    A a1; 
    int k = 8;
    a1 = A(k);
    a1.display(); 
    return 0; 
}

