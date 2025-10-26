#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date {
private:
    int jour;
    int mois;
    int annee;
    bool checkDate(int j, int m, int a) const;
public:
    Date(int j = 1, int m = 1, int a = 2000);
    void affiche() const;
    int getJour() const;
    int getMois() const;
    int getAnnee() const;
    void setJour(int j);
    void setMois(int m);
    void setAnnee(int a);
};

#endif
