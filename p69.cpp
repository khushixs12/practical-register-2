#include <iostream>
using namespace std;


template <class T>
void show(T a) {
    cout << "a = " << a << endl; 
}


void show(int a) {
    cout << "a = " << a << endl; 
}

int main() {
    show('A'); 
    show(2);   
    return 0; 
}

