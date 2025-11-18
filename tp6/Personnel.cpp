#include "Personnel.h"
#include <iostream>
using namespace std;

Personnel::Personnel(string n,string p,float s)
: Personne(n,p), salaire(s) {}

float Personnel::getSalaire(){ return salaire; }
void Personnel::setSalaire(float s){ salaire=s; }

float Personnel::calculSalaire(){ return salaire; }

void Personnel::affiche(){
    cout <<nom<<""<<prenom<<""<<salaire<<endl;
}
