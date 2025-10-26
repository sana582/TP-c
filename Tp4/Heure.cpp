#include "Heure.h"
#include <iostream>

bool Heure::checkHeure(int h, int m) const {
    if (h < 0 || h > 23) return false;
    if (m < 0 || m > 59) return false;
    return true;
}

Heure::Heure(int h, int m) {
    if (!checkHeure(h,m)) {
        heures = 0;
        minutes = 0;
    } else {
        heures = h;
        minutes = m;
    }
}

void Heure::affiche() const {
    if (heures < 10) std::cout << "0";
    std::cout << heures << ":";
    if (minutes < 10) std::cout << "0";
    std::cout << minutes;
}

int Heure::getHeures() const { return heures; }
int Heure::getMinutes() const { return minutes; }
void Heure::setHeures(int h) { if (checkHeure(h, minutes)) heures = h; }
void Heure::setMinutes(int m) { if (checkHeure(heures, m)) minutes = m; }
