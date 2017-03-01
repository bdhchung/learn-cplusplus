#include <iostream>
#include <math.h>
using namespace std;

class Point {
public:
    int x, y;
public:
    Point() {}
    Point(int a, int b) : x(a), y(b) {}
    void set_values(int, int);
    int getX();
    int getY();
    void transform(int, int);
    void setPoint();
    void getPoint();
};

void Point::set_values(int a, int b) {
    x = a;
    y = b;
}

int Point::getX() {
    return x;
}

int Point::getY() {
    return y;
}

void Point::transform(int a, int b) {
    x = x + a;
    y = y + b;
}

void Point::setPoint() {
    cout << "Type x : " << endl;
    cin >> x;
    cout << "Type y: " << endl;
    cin >> y;
}

void Point::getPoint() {
    cout << "Point(x,y) = (" << x << "," << y << ")\n";
}

class Triangle {
public:
    Point p1, p2, p3;
public:
    Triangle() {}
    Triangle(Point a, Point b, Point c) : p1(a), p2(b), p3(c) {}
    void setTriangle();
    void getTriangle();
    void transform(int, int);
    void rotate(double);
    void zoomOut(double);
    void zoomIn(double);
};

void Triangle::setTriangle() {
    cout << "Type p1: " << endl;
    p1.setPoint();
    cout << "Type p2: " << endl;
    p2.setPoint();
    cout << "Type p3: " << endl;
    p3.setPoint();
}

void Triangle::transform(int a, int b) {
    cout << "transform triangle with (" << a << "," << b << ")\n";
    p1.transform(a,b);
    p2.transform(a,b);
    p3.transform(a,b);
}

void Triangle::rotate(double alpha) {
    cout << "rotate triangle with (" << alpha << ")\n";
    p1.set_values(p1.x*cos(alpha) - p1.y*sin(alpha),
                  p1.x*sin(alpha) + p1.y*cos(alpha));
    p2.set_values(p2.x*cos(alpha) - p2.y*sin(alpha),
                  p2.x*sin(alpha) + p2.y*cos(alpha));
    p3.set_values(p3.x*cos(alpha) - p3.y*sin(alpha),
                  p3.x*sin(alpha) + p3.y*cos(alpha));
}

void Triangle::zoomOut(double ratio) {

}

void Triangle::zoomIn(double ratio) {

}

void Triangle::getTriangle() {
    cout << "p1: "; p1.getPoint();
    cout << "p2: "; p2.getPoint();
    cout << "p3: "; p3.getPoint();
}

int week2_2() {
    Triangle triangle;
    triangle.p1.set_values(1,2);
    triangle.p2.set_values(2,3);
    triangle.p3.set_values(4,5);
//    triangle.setTriangle();
    triangle.getTriangle();
    triangle.transform(1,1);
    triangle.getTriangle();
    triangle.rotate(20/180);
    triangle.getTriangle();
}