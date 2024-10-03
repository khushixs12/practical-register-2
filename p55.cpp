#include <iostream>
using namespace std;

class Base {
protected:
    int a, b;

public:
    void set_ab(int x, int y) {
        a = x;
        b = y;
    }

    void show_ab() {
        cout << a << " " << b << endl; 
    }
};

class Derive : public Base {
private:
    int g;

public:
    void set_g() {
        g = (a * b); 
    }

    void show_g() {
        cout << g << endl; 
    }
};

int main() { 
    Derive obj;
    obj.set_ab(3, 3);
    obj.show_ab();
    obj.set_g();
    obj.show_g();
    cout << "Size of obj: " << sizeof(obj) << endl; 
    return 0; 
}

