//
// Created by John on 2/28/2017.
//
#include <iostream>
using namespace std;

#include "Rectangle.h"
int rectangle() {
    // functional form
    Rectangle rect (3,4);
    Rectangle rectb (5,6);
//    Rectangle rectc;
    cout << "rect area: " << rect.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;
//    cout << "rectc area: " << rectc.area() << endl;

    Rectangle obj (3,4);
    Rectangle *foo, *bar, *baz;
    foo = &obj;
    baz = new Rectangle[2] {{2,5}, {3,6}};
    bar = new Rectangle (5,6);
    cout << "obj's area: " << obj.area() << endl;
    cout << "foo's area: " << foo->area() << endl;
    cout << "bar's area: " << bar->area() << endl;
    cout << "baz[0]'s area: " << baz[0].area() << endl;
    cout << "baz[1]'s area: " << baz[1].area() << endl;
    return 0;
}