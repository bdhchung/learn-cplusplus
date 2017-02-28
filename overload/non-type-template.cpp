#include <iostream>
using namespace std;

template <class T, int N>
T fixed_multiply(T val) {
    return val * N;
}

int non_type_template() {
     cout << fixed_multiply<int,2>(10) << endl;
    cout << fixed_multiply<int,3>(10) << endl;
}