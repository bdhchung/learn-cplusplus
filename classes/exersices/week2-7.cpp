#include <iostream>
using namespace std;

class Polynomial {
public:
    int n;
    int a[];
public:
    Polynomial() {};
    void setPolymonial();
    void getPolymonial();
};

void Polynomial::setPolymonial() {
    cout << "type n:" << endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "type a[" << i << "]\n";
        cin >> a[i];
    }
}

void Polynomial::getPolymonial() {
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cout << a[i] << "*x ";
        } else {
            if (a[i] > 0)
                cout << "+ " << a[i] << "*x^" << i << " ";
            else
                cout << "- " << -a[i] << "*x^" << i << " ";
        }

    }
}

int main() {
    Polynomial poly;
    poly.setPolymonial();
    poly.getPolymonial();
}