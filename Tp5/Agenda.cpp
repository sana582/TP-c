#include "Agenda.h"
#include <iostream>

Agenda::Agenda() : premier(nullptr) {}

Agenda::Agenda(const Agenda& a) {
    if (!a.premier) {
        premier = nullptr;
    } else {
        premier = new NoeudRDV(a.premier->getInfo());
        NoeudRDV* courant = premier;
        NoeudRDV* autre = a.premier->getSuivant();
        while (autre) {
            courant->setSuivant(new NoeudRDV(autre->getInfo()));
            courant = courant->getSuivant();
            autre = autre->getSuivant();
        }
    }
}

Agenda::~Agenda() {
    vider();
}

void Agenda::ajoute(const RDV& r) {
    NoeudRDV* n = new NoeudRDV(r, premier);
    premier = n;
}

void Agenda::enleve() {
    if (premier) {
        NoeudRDV* temp = premier;
        premier = premier->getSuivant();
        delete temp;
    }
}

void Agenda::affiche() const {
    NoeudRDV* p = premier;
    int i = 1;
    while (p) {
        std::cout << "RDV " << i << " : ";
        p->getInfo().affiche();
        std::cout << std::endl;
        p = p->getSuivant();
        i++;
    }
    if (i == 1) std::cout << "Agenda vide." << std::endl;
}

void Agenda::vider() {
    while (premier) enleve();
}
