#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date {
private:
    int day, month, year;
    bool checkDate(int j, int m, int a);

public:
    Date();  
    Date(int d, int m, int y);  
    void affiche() const;
    int getday() const; 
    int getmonth() const;
    int getyear() const;
    void setday(int d);
    void setmonth(int m);
    void setyear(int y);
};

#endif
