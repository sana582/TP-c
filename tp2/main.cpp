#include <iostream>
#include "Point.h"
#include "Vector.h"
using namespace std;

int main() {
    cout << "=== TEST CLASSE POINT ===" << endl;

    Point p1;              // création d’un point par défaut
    p1.saisir();           // saisie des coordonnées
    Point p2(1.0, 2.0, 3.0); // création d’un autre point

    cout << "P1 = "; p1.afficher(); cout << endl;
    cout << "P2 = "; p2.afficher(); cout << endl;

    cout << "Distance entre P1 et P2 : " << p1.distance(p2) << endl;

    p1.translater(1, 1, 1);
    cout << "Après translation, P1 = "; p1.afficher(); cout << endl;

    cout << "Instances de Point : " << Point::getInstanceCount() << endl << endl;

    // ================================
    cout << "=== TEST CLASSE VECTOR ===" << endl;

    Vector v1(3), v2(3); // deux vecteurs de dimension 3

    v1.setCoordinate(0, 1);
    v1.setCoordinate(1, 2);
    v1.setCoordinate(2, 3);

    v2.setCoordinate(0, 4);
    v2.setCoordinate(1, 5);
    v2.setCoordinate(2, 6);

    cout << "v1 = "; v1.afficher(); cout << endl;
    cout << "v2 = "; v2.afficher(); cout << endl;

    cout << "Norme de v1 : " << v1.norme() << endl;
    cout << "Produit scalaire v1.v2 = " << v1.produitScalaire(v2) << endl;

    Vector v3 = v1.addition(v2);
    cout << "v1 + v2 = "; v3.afficher(); cout << endl;

    v1.multiplierParReel(2);
    cout << "v1 * 2 = "; v1.afficher(); cout << endl;

    cout << "Instances de Vector : " << Vector::getInstanceCount() << endl;

    return 0;
}
