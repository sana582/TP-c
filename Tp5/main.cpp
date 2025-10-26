#include <iostream>
#include "../tp4/Date.h"
#include "../tp4/Heure.h"
#include "../tp4/RDV.h"
#include "Agenda.h"

using namespace std;

int main() {  
    Agenda agenda;

    Date d1(15,10,2025);
    Heure h1(9,0);
    RDV r1(d1,h1,"Bureau");

    Date d2(16,10,2025);
    Heure h2(11,30);
    RDV r2(d2,h2,"Salle 2");

    Date d3(17,10,2025);
    Heure h3(14,0);
    RDV r3(d3,h3,"Salle 3");

    cout << "Ajout de 3 RDV" << endl;
    agenda.ajoute(r1);
    agenda.ajoute(r2);
    agenda.ajoute(r3);
    agenda.affiche();

    cout << "\nSuppression du premier RDV" << endl;
    agenda.enleve();
    agenda.affiche();

    cout << "\nVidage complet de l'agenda" << endl;
    agenda.vider();
    agenda.affiche();

    return 0;
}
