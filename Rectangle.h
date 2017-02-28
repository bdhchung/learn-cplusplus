//
// Created by John on 2/28/2017.
//

#ifndef CPROJECT_RECTANGLE_H
#define CPROJECT_RECTANGLE_H


class Rectangle {
    int width, height;
public:
    Rectangle(int x,int y) : width(x), height(y) {}; // member initialization in constructor
    int area() {return width*height;}
};

#endif //CPROJECT_RECTANGLE_H
