#ifndef ENSEIGNANTPERMANENT_H
#define ENSEIGNANTPERMANENT_H
#include "Personnel.h"

class EnseignantPermanent : public Personnel {
    string bureau;
    int grade;
    float primeMensuelle;
public:
    EnseignantPermanent(string n="",string p="",float s=0,string b="",int g=0,float pm=0);
    float calculSalaire();
    void affiche();
};
#endif
