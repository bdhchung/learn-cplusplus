#include <iostream>
using namespace std;

int foo; // global variable

int some_function() {
    int bar; // local variable
    bar = 0;

    int x;
    x = 0;
//    double x; // wrong: name already used in this scope
    x = 0.0;
}

int other_function() {
    foo = 1; // ok: foo is a global variable
//    bar = 2; // wrong: bar is not visible from this function
}

int example1111() {
    int x = 10;
    int y = 20;
    {
        int x; // x now is inner scope.
        x = 50; // sets value to inner x
        y = 50; // set value to outer y
        cout << "inner block: \n";
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
    }
    cout << "outer block:\n";
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}