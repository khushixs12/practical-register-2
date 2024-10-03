#include <iostream>
#define SIZE 3

using namespace std;

int main() {
    int *p, i;
    p = new int[SIZE];
    
    cout << "Enter " << SIZE << " numbers: " << endl;
    for (i = 0; i < SIZE; i++) {
        cin >> p[i];
    }

    cout << "The numbers entered are:" << endl;
    for (i = 0; i < SIZE; i++) {
        cout << p[i] << endl;
    }

    
    delete[] p;

    return 0;
}

