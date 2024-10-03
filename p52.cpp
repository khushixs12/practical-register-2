#include <iostream>
#include <cstdlib>
#include <new>
using namespace std;

int cnt = 0;

void my_handler() {
    cerr << "Memory exhausted after " << cnt << " allocations" << endl;
    exit(1);
}

int main() {
    set_new_handler(my_handler); 

    while (true) { 
        cnt++;
        int *p = new int[10000]; 
    }

    return 0; 
}

