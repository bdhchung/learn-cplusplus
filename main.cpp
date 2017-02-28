#include <iostream>
using namespace std;

#define PI 3.14159
#define NEWLINE  '\n'

int calculator() {
    int a,b;
    int result;
    a = 5;
    b = 2;
    a = a + 1;
    result = a - b;

    // print out the result
    cout << result << endl;

    string mystring;
    mystring = "This is a string";
    cout << mystring << endl;

    cout << PI << endl;
    cout << NEWLINE << endl;
    return 0;
}