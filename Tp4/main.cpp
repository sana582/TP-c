#include <iostream>
#include "Date.h"
#include "Heure.h"
#include "RDV.h"
#include <string>

int main() {
    Date d1(15,10,2025);
    Heure h1(14,30);
    RDV r1(d1,h1,"Salle A");
    r1.setNombreDeParticipants(2);
    r1.setParticipant(0,"Alice");
    r1.setParticipant(1,"Bob");
    std::cout << "RDV 1: " << std::endl;
    r1.affiche();

    RDV r2;
    std::cout << "Saisie RDV 2" << std::endl;
    r2.saisie();
    std::cout << "RDV 2: " << std::endl;
    r2.affiche();

    if (!r1.estCompatibleAvec(r2)) std::cout << "Les RDV sont incompatibles (meme date et heure)." << std::endl;
    else std::cout << "Les RDV sont compatibles." << std::endl;

    return 0;
}
