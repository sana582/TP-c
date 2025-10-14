#include <iostream>
#include "Heure.h"

Heure::Heure() : heures(0), minutes(0) {}

Heure::Heure(int h, int m) : heures(h), minutes(m) {}

int Heure::getHeures() const {
    return heures;
}

int Heure::getMinutes() const {
    return minutes;
}

void Heure::setHeures(int h) {
    heures = h;
}

void Heure::setMinutes(int m) {
    minutes = m;
}

void Heure::affiche() const {
    std::cout << heures << "h" << (minutes < 10 ? "0" : "") << minutes << std::endl;
}
