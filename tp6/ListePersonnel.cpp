#include "ListePersonnel.h"
#include <iostream>
using namespace std;

ListePersonnel::ListePersonnel(){
    taille = 10;                
    nb = 0;
    tab = new Personnel*[taille];
}

void ListePersonnel::doubleTableau(){
    taille *= 2;
    Personnel** nv = new Personnel*[taille];
    for(int i=0;i<nb;i++) nv[i]=tab[i];
    delete[] tab;
    tab = nv;
}

void ListePersonnel::ajout(Personnel* p){
    if(nb == taille) doubleTableau();
    tab[nb++] = p;
}

void ListePersonnel::afficherSalaires(){
    for(int i=0;i<nb;i++){
        cout << tab[i]->getNom() << " : " << tab[i]->calculSalaire() << endl;
    }
}
ListePersonnel::~ListePersonnel() {
    delete[] tab;
}
int main() {
    ListePersonnel liste;

    PersonnelAdmin* pa = new PersonnelAdmin("Sana", "Riahi", 1200, 10, 15);
    PersonnelAdmin* pa2 = new PersonnelAdmin("Salima", "Naimi", 1500, 8, 20);
    EnseignantPermanent* ep = new EnseignantPermanent("Sana", "Riahi", 2000, "B101", 3, 150);
    EnseignantPermanent* ep2 = new EnseignantPermanent("Salima", "Naimi", 2500, "B102", 4, 200);
    EnseignantVacataire* ev = new EnseignantVacataire("Sana", "Riahi", 0, "C01", 20, 25);
    EnseignantVacataire* ev2 = new EnseignantVacataire("Salima", "Naimi", 0, "C02", 15, 30);

    liste.ajout(pa);
    liste.ajout(pa2);
    liste.ajout(ep);
    liste.ajout(ep2);
    liste.ajout(ev);
    liste.ajout(ev2);

    liste.afficherSalaires();

    delete pa;
    delete pa2;
    delete ep;
    delete ep2;
    delete ev;
    delete ev2;

    return 0;
}

