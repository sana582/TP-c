#include <iostream>
#include "Vector.h"

using namespace std;

int main() {
    Vector v1(1.0, 2.0, 3.0);
    Vector v2(4.0, 5.0, 6.0);

    cout << "v1 = ";
    v1.afficher();

    cout << "v2 = ";
    v2.afficher();

    Vector v3 = v1 + v2;
    cout << "v1 + v2 = ";
    v3.afficher();

    v1 += v2;
    cout << "v1 += v2 -> ";
    v1.afficher();

    double dot = v1 * v2;
    cout << "v1 * v2 = " << dot << endl;

    Vector v4 = v2 * 2.0;
    cout << "v2 * 2 = ";
    v4.afficher();

    Vector v5 = 3.0 * v2;
    cout << "3 * v2 = ";
    v5.afficher();

    cout << "v2 == v4 ? " << (v2 == v4 ? "oui" : "non") << endl;
    cout << "v2 != v4 ? " << (v2 != v4 ? "oui" : "non") << endl;

    Vector copie = v3;
    cout << "copie de v3 = ";
    copie.afficher();

    return 0;
}
