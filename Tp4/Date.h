#ifndef Date_H
#define Date_H
#include <iostream>
class Date {
private: int day;
private: int month;
private: int year;
bool checkDate(int j, int m, int a);
public: Date(int d, int m, int y);  
public: void affiche() const;
public: int getday() const; 
public: int getmonth() const;
public: int getyear() const;
public: void setday(int d);
public: void setmonth(int m);
public: void setyear(int y);
};

#endif