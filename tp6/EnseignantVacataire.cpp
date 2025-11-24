#include "EnseignantVacataire.h"
#include <iostream>
using namespace std;

EnseignantVacataire::EnseignantVacataire(string n,string p,float s,string c,int h,float t)
: Personnel(n,p,s), casier(c), nbreHeures(h), taux(t) {}

float EnseignantVacataire::calculSalaire(){
    return taux * nbreHeures;
}

void EnseignantVacataire::affiche(){
    cout << nom << " " << prenom << " salaire: " << calculSalaire() << endl;
}
int main() {
    EnseignantVacataire ev1("Sana", "Riahi", 0, "C01", 20, 25);
    EnseignantVacataire ev2("Salima", "Naimi", 0, "C02", 15, 30);

    ev1.affiche();
    ev2.affiche();

    cout << "Salaire de " << ev1.getNom() << " : " << ev1.calculSalaire() << endl;
    cout << "Salaire de " << ev2.getNom() << " : " << ev2.calculSalaire() << endl;

    return 0;
}
