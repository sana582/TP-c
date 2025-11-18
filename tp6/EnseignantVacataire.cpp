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
