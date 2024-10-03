#include <iostream>
using namespace std;

class A {
private:
    int a;
    int b;

public:
    void get_data(int x, int y);
    void put_data();
};

void A::get_data(int x, int y) {
    a = x;
    b = y;
}

void A::put_data() {
    cout << "The value of a = " << a << endl;
    cout << "The value of b = " << b << endl;
}

int main() {
    A *ptr;
    ptr = new A; 
    ptr->get_data(5, 6);
    ptr->put_data();

    delete ptr; 
    return 0;
}

