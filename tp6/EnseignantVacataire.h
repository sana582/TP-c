#ifndef ENSEIGNANTVACATAIRE_H
#define ENSEIGNANTVACATAIRE_H
#include "Personnel.h"

class EnseignantVacataire : public Personnel {
    string casier;
    int nbreHeures;
    float taux;
public:
    EnseignantVacataire(string n="",string p="",float s=0,string c="",int h=0,float t=0);
    float calculSalaire();
    void affiche();
};
#endif
