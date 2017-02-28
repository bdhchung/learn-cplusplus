#include <iostream>
#include <array>
using namespace std;

int library_array() {
    array<int,3> myarray {10,20,30};
    for (int i = 0; i < myarray.size(); i++) {
        ++ myarray[i];
    }
    for (int elem : myarray) {
        cout << elem << endl;
    }
}