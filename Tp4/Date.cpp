#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

    bool checkDate(int j, int m, int a) {
        return (j >= 1 && j <= 31) && (m >= 1 && m <= 12) && (a >= 2000 && a <= 2050);
    }

public:
    Date(int d = 1, int m = 1, int y = 2000) {
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

    void affiche() const {
        cout << day << "/" << month << "/" << year << endl;
    }

    int getDay() const { return day; }
    int getMonth() const { return month; }
    int getYear() const { return year; }

    void setDay(int d) {
        if (checkDate(d, month, year)) day = d;
        else cout << "Jour invalide !" << endl;
    }

    void setMonth(int m) {
        if (checkDate(day, m, year)) month = m;
        else cout << "Mois invalide !" << endl;
    }

    void setYear(int y) {
        if (checkDate(day, month, y)) year = y;
        else cout << "Année invalide !" << endl;
    }
};
