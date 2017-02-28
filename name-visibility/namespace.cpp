#include <iostream>
using namespace std;
/**
 * Namespaces allow us to group named entities that
 * otherwise would have global scope into narrower scopes,
 * giving them namespace scope. This allows organizing
 * the elements of programs into different logical scopes
 * referred to by names.
 * @return
 */

//namespace  foo {
//    int value() {return 4;}
//}

namespace bar {
    const double pi = 3.1416;
    double value() {return 2*pi;}
}

/**
 * namespace can be split
 */
//namespace foo {
//    int a;
//}

//int namespace1() {
//    cout << foo::value() << endl;
//    cout << bar::value() << endl;
//    cout << bar::pi << endl;
//    return 0;
//}