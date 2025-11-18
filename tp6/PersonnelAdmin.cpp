#include "PersonnelAdmin.h"
#include <iostream>
using namespace std;

PersonnelAdmin::PersonnelAdmin(string n,string p,float s,int h,float t)
: Personnel(n,p,s), heuresSup(h), taux(t) {}

float PersonnelAdmin::calculSalaire(){
    return salaire + heuresSup * taux;
}

void PersonnelAdmin::affiche(){
    cout << nom << " " << prenom << " salaire: " << calculSalaire() << endl;
}
