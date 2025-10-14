#ifndef RDV_H
#define RDV_H

#include <string>
#include "Date.h"
#include "Heure.h"

class RDV {
private:
    Date date;
    Heure heure;
    std::string lieu;
    int nombreDeParticipants;
    std::string* participants;

public:
    RDV();
    ~RDV();

    void affiche() const;
    void saisieParticipants();
    void saisieLieu();
    void saisie();
    void setDate(const Date& dateRdv);
    void setHeure(const Heure& heureRdv);
    void setLieu(const std::string& lieuRdv);
    void setNombreDeParticipants(int nombreDeParticipants);
    void setParticipants(std::string* ps);
    void setParticipant(int i, std::string s);
};

#endif
