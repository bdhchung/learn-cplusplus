#include <iostream>
using namespace std;

class Point {
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

int main() {
    Point p1 (10,10);
    Point p2;
    p2.setPoint();
    p2.getPoint();
}