#ifndef LISTEPERSONNEL_H
#define LISTEPERSONNEL_H
#include "Personnel.h"

class ListePersonnel {
    Personnel** tab;
    int nb;
    int taille;
public:
    ListePersonnel();
    void doubleTableau();
    void ajout(Personnel* p);
    void afficherSalaires();
};
#endif
