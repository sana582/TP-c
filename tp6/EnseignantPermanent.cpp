#include "EnseignantPermanent.h"
#include <iostream>
using namespace std;

EnseignantPermanent::EnseignantPermanent(string n,string p,float s,string b,int g,float pm)
: Personnel(n,p,s), bureau(b), grade(g), primeMensuelle(pm) {}

float EnseignantPermanent::calculSalaire(){
    return salaire + grade * primeMensuelle / 100;
}

void EnseignantPermanent::affiche(){
    cout << nom << " " << prenom << " salaire: " << calculSalaire() << endl;
}
