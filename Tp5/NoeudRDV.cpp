#include "NoeudRDV.h"

NoeudRDV::NoeudRDV(const RDV& r) : info(r), suivant(nullptr) {}
NoeudRDV::NoeudRDV(const RDV& r, NoeudRDV* s) : info(r), suivant(s) {}
RDV NoeudRDV::getInfo() const { return info; }
NoeudRDV* NoeudRDV::getSuivant() const { return suivant; }
void NoeudRDV::setInfo(const RDV& r) { info = r; }
void NoeudRDV::setSuivant(NoeudRDV* s) { suivant = s; }
