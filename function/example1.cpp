#include <iostream>
using namespace std;

/**
 * At the moment of the function call, the value of both arguments (5 and 3)
 * are copied to the local variables int a and int b within the function.
 * @param a
 * @param b
 * @return
 */
int addition (int a, int b) {
    int r;
    r = a + b;
    return r;
}

int example1() {
    int z;
    z = addition(5,3);
    cout << "The result is " << z;
}