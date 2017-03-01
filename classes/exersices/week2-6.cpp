#include <iostream>
using namespace std;

class CDate {
public:
    int day, month, year;
public:
    CDate() {}
    CDate(int d, int m, int y) : day(d), month(m), year(y) {}
    void add(int);
    void sub(int);
    void increase();
    void decrease();
    int sub(CDate d1, CDate d2);
    void setDate();
    void getDate();
};

void CDate::add(int d) {
    day += d;
}
void CDate::sub(int d) {
    day -= d;
}
void CDate::increase() {
    day += 1;
}
void CDate::decrease() {
    day -= 1;
}
int CDate::sub(CDate d1, CDate d2) {

}

void CDate::setDate() {
    cout << "Type day: " << endl;
    cin >> day;
    cout << "Type month: " << endl;
    cin >> month;
    cout << "Type year: " << endl;
    cin >> year;
}

void CDate::getDate() {
    cout << "Date: " << day << "/" << month <<"/"<< year << endl;
}

int week2_6() {
    CDate date1;
    CDate date2;
    date1.setDate();
    date1.getDate();
    date2.setDate();
    date2.getDate();
    date1.add(1);
    date1.sub(1);
    date1.increase();
    date2.decrease();
    date1.sub(date1,date2);

}
