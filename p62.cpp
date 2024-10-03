#include <iostream>
using namespace std;

class base {
public:
    base() {
        cout << "Constructing base" << endl; 
    }
    
    virtual ~base() { 
        cout << "Destructing the base" << endl;
    }
};

class derived : public base {
public:
    derived() {
        cout << "Constructing the derived" << endl; 
    }

    ~derived() {
        cout << "Destructing the derived" << endl; 
    }
};

int main() {
    derived *d = new derived();
    base *b = d; 
    delete b; 
    return 0; 
}

