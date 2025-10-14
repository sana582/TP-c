#include "Date.h"
#include <iostream>
using namespace std;

Date::Date(int d, int m, int y) {
    if (checkDate(d, m, y)) {
        day = d;
        month = m;
        year = y;
    } else {
        day = 1;
        month = 1;
        year = 2000;
    }
}

bool Date::checkDate(int j, int m, int a) {
    return (j >= 1 && j <= 31) && (m >= 1 && m <= 12) && (a >= 2000 && a <= 2050);
}

void Date::affiche() const {
    cout << day << "/" << month << "/" << year << endl;
}

int Date::getday() const { return day; }
int Date::getmonth() const { return month; }
int Date::getyear() const { return year; }

void Date::setday(int d) {
    if (checkDate(d, month, year)) day = d;
}

void Date::setmonth(int m) {
    if (checkDate(day, m, year)) month = m;
}

void Date::setyear(int y) {
    if (checkDate(day, month, y)) year = y;
}
