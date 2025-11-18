#include "Eleve.h"
#include <iostream>
using namespace std;

Eleve::Eleve(string n,string p,string promo,float g,string gtd)
: Personne(n,p), promotion(promo), groupeTD(gtd), GPA(g) {}

float Eleve::getGPA(){ return GPA; }
string Eleve::getPromotion(){ return promotion; }
string Eleve::getGroupeTD(){ return groupeTD; }

void Eleve::setGPA(float g){ GPA=g; }
void Eleve::setPromotion(string pr){ promotion=pr; }
void Eleve::setGroupeTD(string g){ groupeTD=g; }

float Eleve::calculSalaire(){ return 0; }

void Eleve::affiche(){
    cout << nom << " " << prenom << " " << promotion << " " << GPA << endl;
}
 