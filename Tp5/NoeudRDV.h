#ifndef NOEUDRDV_H
#define NOEUDRDV_H

#include "../tp4/RDV.h"

class NoeudRDV {
private:
    RDV info;
    NoeudRDV* suivant;
public:
    NoeudRDV(const RDV& r);
    NoeudRDV(const RDV& r, NoeudRDV* s);
    RDV getInfo() const;
    NoeudRDV* getSuivant() const;
    void setInfo(const RDV& r);
    void setSuivant(NoeudRDV* s);
};

#endif
