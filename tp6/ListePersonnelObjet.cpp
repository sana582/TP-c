#include "ListePersonnelObjet.h"

ListePersonnelObjet::ListePersonnelObjet() {
    nb = 0;
}

void ListePersonnelObjet::ajout(const Personnel& p) {
    if(nb < 100)
        tab[nb++] = p;
}

void ListePersonnelObjet::afficherSalaires() {
    for(int i = 0; i < nb; i++)
        cout << tab[i].getNom() << " : " << tab[i].calculSalaire() << endl;
}
