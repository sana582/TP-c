#ifndef RDV_H
#define RDV_H

#include "Date.h"
#include "Heure.h"
#include <string>
#include <iostream>

class RDV {
private:
    Date date;
    Heure heure;
    std::string lieu;
    int nbParticipants;
    std::string* participants;
    void initParticipantsArray();
public:
    RDV();
    RDV(const Date& d, const Heure& h, const std::string& l);
    RDV(const RDV& other);
    RDV& operator=(const RDV& other);
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
    bool estCompatibleAvec(const RDV& r) const;
};

#endif
