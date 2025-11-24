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
int main() {
    EnseignantPermanent ep1("Sana", "Riahi", 2000, "B101", 3, 150);
    EnseignantPermanent ep2("Salima", "Naimi", 2500, "B102", 4, 200);

    ep1.affiche();
    ep2.affiche();

    cout << "Salaire de " << ep1.getNom() << " : " << ep1.calculSalaire() << endl;
    cout << "Salaire de " << ep2.getNom() << " : " << ep2.calculSalaire() << endl;

    return 0;
}
