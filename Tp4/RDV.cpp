#include "RDV.h"
#include <iostream>
#include <limits>

void RDV::initParticipantsArray() {
    participants = new std::string[10];
    nbParticipants = 0;
}

RDV::RDV() : date(), heure(), lieu("") {
    initParticipantsArray();
}

RDV::RDV(const Date& d, const Heure& h, const std::string& l) : date(d), heure(h), lieu(l) {
    initParticipantsArray();
}

RDV::RDV(const RDV& other) : date(other.date), heure(other.heure), lieu(other.lieu), nbParticipants(other.nbParticipants) {
    participants = new std::string[10];
    for (int i = 0; i < 10; ++i) participants[i] = other.participants[i];
}

RDV& RDV::operator=(const RDV& other) {
    if (this != &other) {
        date = other.date;
        heure = other.heure;
        lieu = other.lieu;
        delete [] participants;
        participants = new std::string[10];
        nbParticipants = other.nbParticipants;
        for (int i = 0; i < 10; ++i) participants[i] = other.participants[i];
    }
    return *this;
}

RDV::~RDV() {
    delete [] participants;
}

void RDV::affiche() const {
    std::cout << "Date: ";
    date.affiche();
    std::cout << " Heure: ";
    heure.affiche();
    std::cout << " Lieu: " << lieu << " Participants(" << nbParticipants << "):";
    for (int i = 0; i < nbParticipants && i < 10; ++i) {
        if (i) std::cout << ",";
        std::cout << " " << participants[i];
    }
    std::cout << std::endl;
}

void RDV::saisieParticipants() {
    std::cout << "Nombre de participants (max 10): ";
    int n;
    std::cin >> n;
    if (n < 0) n = 0;
    if (n > 10) n = 10;
    std::cin.ignore();
    nbParticipants = n;
    for (int i = 0; i < nbParticipants; ++i) {
        std::cout << "Nom participant " << (i+1) << ": ";
        std::getline(std::cin, participants[i]);
    }
    for (int i = nbParticipants; i < 10; ++i) participants[i] = "";
}

void RDV::saisieLieu() {
    std::cout << "Lieu: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, lieu);
}

void RDV::saisie() {
    int j,m,a;
    std::cout << "Saisie date jour mois annee: ";
    std::cin >> j >> m >> a;
    Date d(j,m,a);
    date = d;
    int hh,mm;
    std::cout << "Saisie heure minutes: ";
    std::cin >> hh >> mm;
    Heure h(hh, mm);
    heure = h;
    std::cin.ignore();
    std::cout << "Lieu: ";
    std::getline(std::cin, lieu);
    saisieParticipants();
}

void RDV::setDate(const Date& dateRdv) { date = dateRdv; }
void RDV::setHeure(const Heure& heureRdv) { heure = heureRdv; }
void RDV::setLieu(const std::string& lieuRdv) { lieu = lieuRdv; }
void RDV::setNombreDeParticipants(int nombreDeParticipants) {
    if (nombreDeParticipants < 0) nombreDeParticipants = 0;
    if (nombreDeParticipants > 10) nombreDeParticipants = 10;
    nbParticipants = nombreDeParticipants;
    for (int i = nbParticipants; i < 10; ++i) participants[i] = "";
}
void RDV::setParticipants(std::string* ps) {
    if (!ps) return;
    for (int i = 0; i < 10; ++i) participants[i] = ps[i];
}
void RDV::setParticipant(int i, std::string s) {
    if (i >= 0 && i < 10) {
        participants[i] = s;
        if (i+1 > nbParticipants) nbParticipants = i+1;
    }
}

bool RDV::estCompatibleAvec(const RDV& r) const {
    if (date.getJour() == r.date.getJour() &&
        date.getMois() == r.date.getMois() &&
        date.getAnnee() == r.date.getAnnee() &&
        heure.getHeures() == r.heure.getHeures() &&
        heure.getMinutes() == r.heure.getMinutes()) return false;
    return true;
}
