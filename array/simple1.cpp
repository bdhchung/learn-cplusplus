#include <iostream>
using namespace std;

// TODO - mutiple define of foo ???
//int foo[] = {16,2,77,40,12071};
//int n, result = 0;

int simple11() {
    int foo[] = {16,2,77,40,12071};
    int n, result = 0;
    for (n = 0; n < 5; ++n) {
        result += foo[n];
    }
    cout << result;
    return 0;
}