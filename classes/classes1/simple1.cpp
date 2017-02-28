// Classes are an expanded concept of data structures: like data structures, they can contain data members, but they can also contain functions as members.
// An object is an instantiation of a class. In terms of variables, a class would be the type, and an object would be the variable.
// Classes are defined using either keyword class or keyword struct, with the following syntax:
//class class_name {
//    access_specifier_1:
//            member1;
//    access_specifier_2:
//            member2;
//    ...
//} object_names;
// Classes have the same format as plain data structures, except that they can also include functions and have these new things called access specifiers. An access specifier is one of the following three keywords: private, public or protected. These specifiers modify the access rights for the members that follow them:
// private members of a class are accessible only from within other members of the same class (or from their "friends").
// protected members are accessible from other members of the same class (or from their "friends"), but also from members of their derived classes.
// Finally, public members are accessible from anywhere where the object is visible.

#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
public:
    void set_values(int,int);
    int area() {return width*height;}
};
// In this outside definition, the operator of scope (::)
// is used to specify that the function being defined
// is a member of the class Rectangle
// and not a regular non-member function
//  This causes no differences in behavior, but only on possible compiler optimizations.
void Rectangle::set_values(int x, int y) {
    width = x;
    height = y;
}
int classes1_siimple1() {
    Rectangle rect;
    rect.set_values(3,4);
    cout << "area: " << rect.area();
    Rectangle recta, rectb;
    recta.set_values(3,4);
    rectb.set_values(5,6);
    cout << "recta area: " << recta.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;
    return 0;
}