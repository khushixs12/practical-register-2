#include <iostream>
using namespace std;

int main() {
    int *p, i, n;
    cout << "Enter the value of n: ";
    cin >> n;

    p = new int[n]; // Allocating memory for an array

    cout << "Enter the values one by one:" << endl;
    for (i = 0; i < n; i++) {
        cin >> p[i];
    }

    cout << "The numbers entered are:" << endl;
    for (i = 0; i < n; i++) {
        cout << p[i] << endl;
    }

    delete[] p; 
    return 0;
}

