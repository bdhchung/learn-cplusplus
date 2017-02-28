#include <iostream>
using namespace std;

int main2() {
    // initalization; condition; increase
    for (int n = 10; n > 0; n--) {
        cout << n << ", ";
    }
    cout << "liftoff!\n";

    string str {"Hello!"};
    for (char c : str) {
        cout << "[" << c << "]";
    }
    cout << "\n";
    return 0;
}