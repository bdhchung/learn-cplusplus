//
// Created by John on 2/28/2017.
//

#ifndef CPROJECT_CIRCLE_H
#define CPROJECT_CIRCLE_H


class Circle {
    double radius;
public:
    Circle(double r) {radius = r;}
    double circum() {return 2*radius*3.14159265;}
    double area() {return radius*radius*3.14159265;}
};

class  Cylinder {
    Circle base;
    double height;
public:
    Cylinder(double r, double h) : base(r), height(h) {}
    double volume() {return base.area() * height;}
};

#endif //CPROJECT_CIRCLE_H
