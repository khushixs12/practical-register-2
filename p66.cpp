#include <iostream>
using namespace std;

class sample {
private:
    int a, b;

public:
    
    sample(int x, int y) {
        a = x;
        b = y;
    }

    
    sample() {}

    
    sample operator+(sample &s) {
        sample k; 
        k.a = a + s.a; 
        k.b = b + s.b; 
        return k;
    }

    
    void display() {
        cout << "a = " << a << endl; 
        cout << "b = " << b << endl; 
    }
};

int main() {
    sample s1(5, 6); 
    sample s2(6, 7); 
    sample s3; 

    s3 = s1 + s2; 
    s3.display(); 

    return 0; 
}

