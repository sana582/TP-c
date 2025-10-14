#ifndef AGENDA_H
#define AGENDA_H

#include "NoeudRDV.h"

class Agenda {
private:
    NoeudRDV* premier;

public:
    Agenda();
    Agenda(const Agenda& autre);
    ~Agenda();

    void ajoute(const RDV& r);
    void enleve();
    void affiche() const;
    void vider();
};

#endif
