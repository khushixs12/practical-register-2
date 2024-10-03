#include <iostream>
using namespace std;

class Outer {
private:
    
    template <class T>
    class Inner {
    public:
        T var1; 
        Inner() {}

        
        Inner(T t) {
            var1 = t;
        }
    };

    Inner<int> i1;  
    Inner<char> i2; 

public:
    
    Outer(int i, char c) : i1(i), i2(c) {} 

    
    void display() {
        cout << i1.var1 << " " << i2.var1 << endl; 
    }
};

int main() {
    Outer O(25, 'S');
    O.display(); 
    return 0; 
}

