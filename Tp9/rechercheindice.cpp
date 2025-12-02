#include <iostream>
#include "rechercheindice.h"
using namespace std;

int main() {
   
    int tabInt[] = {5, 3, 8, 2, 7};
    int nInt = sizeof(tabInt) / sizeof(tabInt[0]);
    cout << "Indice du minimum entiers = " << minIndex(tabInt, nInt) << endl;

    double tabDouble[] = {4.5, 2.1, 2.1, 3.7};
    int nDouble = sizeof(tabDouble) / sizeof(tabDouble[0]);
    cout << "Indice du minimum réels = " << minIndex(tabDouble, nDouble) << endl;
    int tab1[] = {4, 2, 2, 5};
    char tab2[] = {'z', 'b', 'a', 'x'}; 
    int n = sizeof(tab1) / sizeof(tab1[0]);
    cout << "Indice du minimum avec critère secondaire = " << minIndex(tab1, tab2, n) << endl;

    return 0;
}
