#include "RDV.h"
#include <iostream>

RDV::RDV() {
    nombreDeParticipants = 0;
    participants = new std::string[10];
}

RDV::~RDV() {
    delete[] participants;
}

void RDV::affiche() const {
    std::cout << "Date : ";
    date.affiche();
    std::cout << "\nHeure : ";
    heure.affiche();
    std::cout << "\nLieu : " << lieu << std::endl;
    std::cout << "Nombre de participants : " << nombreDeParticipants << std::endl;
    for (int i = 0; i < nombreDeParticipants; i++)
        std::cout << "Participant " << i + 1 << " : " << participants[i] << std::endl;
}

void RDV::saisieParticipants() {
    std::cout << "Nombre de participants : ";
    std::cin >> nombreDeParticipants;
    std::cin.ignore();
    for (int i = 0; i < nombreDeParticipants; i++) {
        std::cout << "Nom du participant " << i + 1 << " : ";
        std::getline(std::cin, participants[i]);
    }
}

void RDV::saisieLieu() {
    std::cout << "Lieu : ";
    std::getline(std::cin, lieu);
}

void RDV::saisie() {
    int d, m, y, h, min;
    std::cout << "Jour : ";
    std::cin >> d;
    std::cout << "Mois : ";
    std::cin >> m;
    std::cout << "Annee : ";
    std::cin >> y;
    date = Date(d, m, y);
    std::cout << "Heure : ";
    std::cin >> h;
    std::cout << "Minutes : ";
    std::cin >> min;
    heure = Heure(h, min);
    std::cin.ignore();
    saisieLieu();
    saisieParticipants();
}

void RDV::setDate(const Date& dateRdv) {
    date = dateRdv;
}

void RDV::setHeure(const Heure& heureRdv) {
    heure = heureRdv;
}

void RDV::setLieu(const std::string& lieuRdv) {
    lieu = lieuRdv;
}

void RDV::setNombreDeParticipants(int nombre) {
    nombreDeParticipants = nombre;
}

void RDV::setParticipants(std::string* ps) {
    for (int i = 0; i < nombreDeParticipants; i++)
        participants[i] = ps[i];
}

void RDV::setParticipant(int i, std::string s) {
    if (i >= 0 && i < nombreDeParticipants)
        participants[i] = s;
}
