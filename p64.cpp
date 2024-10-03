#include <iostream>
using namespace std;

class Complex {
private:
    int a, b; 

public:
    Complex() { } // Default constructor

    // Function to get input values
    void getvalue() {
        cout << "Enter the two numbers: "; 
        cin >> a >> b;
    }


    void operator++() {
        a = ++a; 
        b = ++b; 
    }

    
    void operator--() {
        a = --a; 
        b = --b; 
    }

    
    void display() {
        cout << a << " + " << b << "i" << endl; 
    }
};

int main() { 
    Complex obj;
    obj.getvalue();
    ++obj; 
    cout << "Incremented Complex number: "; 
    obj.display(); 
    return 0; 
}

