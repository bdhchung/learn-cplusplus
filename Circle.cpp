//
// Created by John on 2/28/2017.
//
#include <iostream>
using namespace std;

#include "Circle.h"
int cicles() {
    Circle foo (10.0); // functional form
    Circle bar = 20.0; // assignment init.
    Circle baz {30.0}; // uniform init.
    Circle qux = {40.0}; // POD-like
    cout << "foo's circumference: " << foo.circum() << endl;

    Cylinder cyl (10,20);
    cout << "cyl's volume: " << cyl.volume() << endl;
}