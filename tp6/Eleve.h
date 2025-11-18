#ifndef ELEVE_H
#define ELEVE_H
#include "Personne.h"

class Eleve : public Personne {
    string promotion, groupeTD;
    float GPA;
public:
    Eleve(string n="", string p="", string promo="", float g=-1, string gtd="");
    float getGPA();
    string getPromotion();
    string getGroupeTD();
    void setGPA(float g);
    void setPromotion(string pr);
    void setGroupeTD(string g);
    float calculSalaire();
    void affiche();
};
#endif
