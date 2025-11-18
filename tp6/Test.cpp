#include <iostream>
#include "Eleve.h"
#include "PersonnelAdmin.h"
#include "EnseignantPermanent.h"
#include "EnseignantVacataire.h"
#include "ListePersonnel.h"
using namespace std;

int main(){
    Eleve e("Sana","Riahi","Promo2025-Grp5",3.7,"TD1");
    e.affiche();
    PersonnelAdmin pa("Ali","Med",1200,10,15);
    EnseignantPermanent ep("Omar","Salah",1500,"B12",3,200);
    EnseignantVacataire ev("Amina","Safi",0,"C4",20,40);
    ListePersonnel lp;
    lp.ajout(&pa);
    lp.ajout(&ep);
    lp.ajout(&ev);
    lp.afficherSalaires();
    return 0;
}
