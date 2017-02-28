// The concept of arrays is related to that of pointers. In fact, arrays work very much like pointers to their first elements, and, actually, an array can always be implicitly converted to the pointer of the proper type.
// int myarray[20];
// int* mypointer;
// mypointer = myarray;
//After that, mypointer and myarray would be equivalent and would have very similar properties. The main difference being that mypointer can be assigned a different address, whereas myarray can never be assigned anything, and will always represent the same block of 20 elements of type int.

#include <iostream>
using  namespace std;

int pointer_and_arrays() {
    int numbers[75];
    int* p;
    p = numbers; *p = 10;
    p++; *p = 20;
    p = &numbers[2]; *p = 30;
    p = numbers + 3; *p = 40;
    p = numbers; *(p+4) = 50;
    for (int n = 0; n < 5; n++) {
        cout << numbers[n] << ", ";
    }
    return 0;
}

//In the chapter about arrays, brackets ([]) were explained as specifying the index of an element of the array. Well, in fact these brackets are a dereferencing operator known as offset operator. They dereference the variable they follow just as * does, but they also add the number between brackets to the address being dereferenced. For example:

//a[5] = 0;       // a [offset of 5] = 0
//*(a+5) = 0;     // pointed to by (a+5) = 0

//These two expressions are equivalent and valid, not only if a is a pointer, but also if a is an array. Remember that if an array, its name can be used just like a pointer to its first element.
