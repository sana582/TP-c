#ifndef PERSONNE_H
#define PERSONNE_H
#include <string>
using namespace std;

class Personne {
protected:
    string nom, prenom, adresse, telephone;
public:
    Personne(string n="", string p="", string a="", string t="");
    string getNom();
    string getPrenom();
    string getAdresse();
    string getTelephone();
    void setNom(string n);
    void setPrenom(string p);
    void setAdresse(string a);
    void setTelephone(string t);
    virtual float calculSalaire() = 0;
    virtual void affiche();
};
#endif
