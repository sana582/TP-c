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
int main() {
    Eleve e1("Sana", "Riahi", "2025", 3.8, "GroupeA");
    Eleve e2("salima", "naimi", "2025", 4.0, "GroupeB");

    e1.affiche();
    e2.affiche();

    e1.setGPA(3.9);
    e1.setPromotion("2026");
    e1.setGroupeTD("GroupeC");

    e1.affiche();

    cout << e1.calculSalaire() << endl;

    return 0;
}