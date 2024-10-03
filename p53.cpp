#include <iostream>
using namespace std;

class A {
private:
    int a;

public:
    A() { 
        a = 5;
    }

    int get(void);
};


int A::get() {
    return a;
}

int main() {
    A a1; 
    cout << a1.get() << endl; 
    return 0;
}

