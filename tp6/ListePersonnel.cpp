#include "ListePersonnel.h"
#include <iostream>
using namespace std;

ListePersonnel::ListePersonnel(int t){
    taille = t;
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
