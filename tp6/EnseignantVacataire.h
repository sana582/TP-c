#ifndef ENSEIGNANTVACATAIRE_H
#define ENSEIGNANTVACATAIRE_H
#include <string>
using namespace std;
class EnseignantVacataire :public Personnel{
    string casier;
    int nbrHures;
    float taux ;
public :
    EnseignantVacataire(string n="",string p="",float s=0, string c="",int nh=0,float t=0);
    float calculSalaire(ç)
}