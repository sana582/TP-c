#include "Personne.h"
#include <iostream>
using namespace std;

Personne::Personne(string n, string p, string a, string t)
    : nom(n), prenom(p), adresse(a), telephone(t) {}

string Personne::getNom(){ return nom; }
string Personne::getPrenom(){ return prenom; }
string Personne::getAdresse(){ return adresse; }
string Personne::getTelephone(){ return telephone; }

void Personne::setNom(string n){ nom=n; }
void Personne::setPrenom(string p){ prenom=p; }
void Personne::setAdresse(string a){ adresse=a; }
void Personne::setTelephone(string t){ telephone=t; }

void Personne::affiche(){
    cout << nom << " " << prenom << endl;
}
int main() {
    Personne p1("Sana", "Riahi", "Rue de Tunis", "12345678");
    Personne p2("Salima", "Naimi", "Avenue de Paris", "87654321");

    p1.affiche();
    p2.affiche();

    p1.setAdresse("Nouvelle Adresse");
    p1.setTelephone("11223344");

    cout << p1.getNom() << " " << p1.getPrenom() << " " 
         << p1.getAdresse() << " " << p1.getTelephone() << endl;

    return 0;
}
