#include <iostream>
using namespace std;


template <class T1, class T2>
void show(T1 a, T2 b) {
    cout << "a = " << a << endl; 
    cout << "b = " << b << endl;
}

int main() {
    show(2.6, 1);        
    show("AKON", 1.1);  
    return 0;           
}

