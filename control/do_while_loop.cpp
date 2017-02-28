#include <iostream>
using namespace std;

int main1() {
    string str;
    do {
        cout << "Enter text: ";
        getline(cin, str);
        cout << "You entered: " << str << endl;
    } while (str != "goodbye");
    return 0;
}