// A data structure is a group of data elements grouped together under one name. These data elements, known as members, can have different types and different lengths. Data structures can be declared in C++ using the following syntax:

//struct type_name {
//member_type1 member_name1;
//member_type2 member_name2;
//member_type3 member_name3;
//.
//.
//} object_names;

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
    string title;
    int year;
} mine, yours;

void printmovie(movies_t movie);

int data_structure_simple() {
    string mystr;

    mine.title = "2001 A Space Odyssey";
    mine.year = 1968;

    cout << "Enter title: ";
    getline(cin, yours.title);
    cout << "Enter year: ";
    getline(cin, mystr);
    stringstream(mystr) >> yours.year;

    cout << "My favorite movie is: \n";
    printmovie(mine);
    cout << "And yours is:\n ";
    printmovie(yours);
    return 0;
}

void printmovie(movies_t movie) {
    cout << movie.title;
    cout << " (" << movie.year << ")\n";
}