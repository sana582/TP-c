#ifndef LISTEPERSONNELOBJET_H
#define LISTEPERSONNELOBJET_H

#include "Personnel.h"
#include <iostream>
using namespace std;

class ListePersonnelObjet {
private:
    Personnel tab[100];
    int nb;

public:
    ListePersonnelObjet();
    void ajout(const Personnel& p);
    void afficherSalaires();
};

#endif
