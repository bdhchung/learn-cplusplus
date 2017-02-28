#include <iostream>
using namespace std;

int divide (int a, int b = 2) {
    int r;
    r = a/b;
    return (r);
}

int defaul_value() {
    cout << divide(12) << endl;
    cout << divide(20,4) << endl;
}