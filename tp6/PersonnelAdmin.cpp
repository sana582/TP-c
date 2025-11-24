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
int main() {
    PersonnelAdmin pa1("Sana", "Riahi", 1200, 10, 15);
    PersonnelAdmin pa2("Salima", "Naimi", 1500, 8, 20);

    pa1.affiche();
    pa2.affiche();

    cout << "Salaire de " << pa1.getNom() << " : " << pa1.calculSalaire() << endl;
    cout << "Salaire de " << pa2.getNom() << " : " << pa2.calculSalaire() << endl;

    return 0;
}
