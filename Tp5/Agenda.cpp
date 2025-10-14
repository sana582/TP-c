#include "Agenda.h"
#include <iostream>

Agenda::Agenda() : premier(nullptr) {}

Agenda::Agenda(const Agenda& autre) : premier(nullptr) {
    NoeudRDV* courant = autre.premier;
    NoeudRDV* dernier = nullptr;

    while (courant) {
        NoeudRDV* nouveau = new NoeudRDV(courant->getRDV());
        if (!premier) {
            premier = nouveau;
        } else {
            dernier->setSuivant(nouveau);
        }
        dernier = nouveau;
        courant = courant->getSuivant();
    }
}

Agenda::~Agenda() {
    vider();
}
void Agenda::ajoute(const RDV&){
    
}
void agenda ::enleve(){
}
void agenda affiche (){
    
}

}