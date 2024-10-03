#include <iostream>
using namespace std;

template<class T1, class T2>
class A {
private:
    T1 a; // First member variable
    T2 b; // Second member variable

public:
    
    A(T1 x, T2 y) {
        a = x;
        b = y;
    }

    
    void show() {
        cout << "a = " << a << endl; 
        cout << "b = " << b << endl; 
    }
};

int main() {
    A<int, double> a1(1, 2.1); 
    a1.show(); 

    A<double, int> a2(1.1, 2); 
    a2.show(); 

    A<int, double> a3(2, 3.2); 
    a3.show(); 

    return 0; 
}

