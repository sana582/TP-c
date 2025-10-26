#include "Date.h"
#include <iostream>

static bool estBissextile(int a) {
    if (a % 400 == 0) return true;
    if (a % 100 == 0) return false;
    return (a % 4 == 0);
}

bool Date::checkDate(int j, int m, int a) const {
    if (a < 2000 || a > 2050) return false;
    if (m < 1 || m > 12) return false;
    if (j < 1) return false;
    int maxj = 31;
    if (m == 4 || m == 6 || m == 9 || m == 11) maxj = 30;
    else if (m == 2) {
        if (estBissextile(a)) maxj = 29;
        else maxj = 28;
    }
    if (j > maxj) return false;
    return true;
}

Date::Date(int j, int m, int a) {
    if (!checkDate(j,m,a)) {
        jour = 1;
        mois = 1;
        annee = 2000;
    } else {
        jour = j;
        mois = m;
        annee = a;
    }
}

void Date::affiche() const {
    std::cout << jour << "/" << mois << "/" << annee;
}

int Date::getJour() const { return jour; }
int Date::getMois() const { return mois; }
int Date::getAnnee() const { return annee; }
void Date::setJour(int j) {
    if (checkDate(j, mois, annee)) jour = j;
}
void Date::setMois(int m) {
    if (checkDate(jour, m, annee)) mois = m;
}
void Date::setAnnee(int a) {
    if (checkDate(jour, mois, a)) annee = a;
}
