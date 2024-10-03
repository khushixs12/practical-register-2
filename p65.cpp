#include <iostream>
using namespace std;

class Sample {
private:
    int a;
    int b;

public:
    Sample() { 
        a = 6;
        b = 7;
    }


    friend void operator-(Sample &x);

    
    void display() {
        cout << "a = " << a << endl; 
        cout << "b = " << b << endl; 
    }
};

void operator-(Sample &x) {
    x.a = -x.a; 
    x.b = -x.b; 
}

int main() {
    Sample s; 
    s.display(); 
    -s; 
    s.display(); 
    return 0; 
}

