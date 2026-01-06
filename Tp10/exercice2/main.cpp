#include <iostream>
#include "Vecteur.h"
#include "VecteurLimite.h"
using namespace std;

int main()
{
    try
    {
        Vecteur v(5);

        cout << "Test normal : v[2] = 10\n";
        v[2] = 10;
        cout << "v[2] = " << v[2] << "\n";

        cout << "Test erreur : v[10]\n"; 
    }
    catch (VecteurLimite)
    {
        cout << "exception limite\n";
    }

    cout << "Fin du programme\n";
    return 0;
}
