#include "Agenda.h"
#include"../Tp4/RDV.h"
int main() {
    Agenda agenda;

    agenda.ajoute(RDV("2024-10-15", "09:00"));
    agenda.ajoute(RDV("2024-10-14", "14:30"));
    agenda.ajoute(RDV("2024-10-16", "11:00"));

    agenda.affiche();
    agenda.enleve();
    agenda.affiche();
    agenda.vider();
    agenda.affiche();

    return 0;
}
