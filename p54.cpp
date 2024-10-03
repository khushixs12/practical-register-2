#include <iostream>
using namespace std;

class Parent {
public:
    int id_p;

    void print_id() {
        cout << "Base id: " << id_p << endl;
    }
};

class Child : public Parent {
public:
    int id_c;

    void print_id_c() {
        cout << "Child id: " << id_c << endl; 
    }
};

int main() { 
    Child obj1;
    obj1.id_p = 7; 
    obj1.print_id(); 

    obj1.id_c = 97;
    obj1.print_id_c(); 

    return 0; 
}

