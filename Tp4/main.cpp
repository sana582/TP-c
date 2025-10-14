#include "Date.h"
#include "Heure.h"
#include "RDV.h"
#include <iostream>
#include <iostream>
using namespace std;


int main() {
    Date d1(29, 1, 2002);
    Date d2(31, 2, 2002);
    d1.affiche();
    d2.affiche();
    d1.setday(30);
    d1.setmonth(2);
    d1.setyear(2003);
    d1.affiche();
    d2.setday(2);
    d2.setmonth(3);
    d2.setyear(2023);
    d2.affiche();
    d1.setyear(2030);
    d1.affiche();
     RDV monRDV;
    monRDV.saisie();
    monRDV.affiche();
     RDV rdv;
    rdv.saisie();
    rdv.affiche();
    return 0;
   
}
