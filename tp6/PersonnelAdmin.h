#ifndef PERSONNELADMIN_H
#define PERSONNELADMIN_H
#include "Personnel.h"

class PersonnelAdmin : public Personnel {
    int heuresSup;
    float taux;
public:
    PersonnelAdmin(string n="",string p="",float s=0,int h=0,float t=0);
    float calculSalaire();
    void affiche();
};
#endif
