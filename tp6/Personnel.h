#ifndef PERSONNEL_H
#define PERSONNEL_H
#include "Personne.h"

class Personnel : public Personne {
protected:
    float salaire;
public:
    Personnel(string n="", string p="", float s=0);
    float getSalaire();
    void setSalaire(float s);
    virtual float calculSalaire();
    virtual void affiche();
};
#endif
