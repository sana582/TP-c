#ifndef HEURE_H
#define HEURE_H

#include <iostream>

class Heure {
private:
    int heures;
    int minutes;
    bool checkHeure(int h, int m) const;
public:
    Heure(int h = 0, int m = 0);
    void affiche() const;
    int getHeures() const;
    int getMinutes() const;
    void setHeures(int h);
    void setMinutes(int m);
};

#endif
