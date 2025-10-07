#include <iostream>
#include "ArrayOfInteger.h"

int main() {
    std::cout << " Test ArrayOfInteger \n";

    ArrayOfInteger a1;
    a1.ajouter(1);
    a1.ajouter(2);
    a1.ajouter(3);
    a1.ajouter(2);
    std::cout << "a1 = ";
    a1.afficher();

    a1.retirer(2);
    std::cout << "Après retrait de 2: ";
    a1.afficher();

    ArrayOfInteger a2 = a1;
    std::cout << "a2 = ";
    a2.afficher();

    a2.ajouter(5);
    std::cout << "a2 après ajout de 5 = ";
    a2.afficher();

    std::cout << "a1 et a2 identiques ? ";
    std::cout << (a1.estIdentique(a2) ? "Oui" : "Non") << std::endl;

    std::cout << "Nombre d'instances : ";
    std::cout << ArrayOfInteger::getInstanceCount() << std::endl;

    ArrayOfInteger a3(10);
    std::cout << "a3 (capacité 10) = ";
    a3.afficher();


    std::cout << "a1.appartient(3) ? ";
    std::cout << (a1.appartient(3) ? "Oui" : "Non") << std::endl;
    std::cout << "a1.appartient(42) ? ";
    std::cout << (a1.appartient(42) ? "Oui" : "Non") << std::endl;

    a1.retirer(42);
    std::cout << "a1 après tentative de retrait de 42: ";
    a1.afficher();


    ArrayOfInteger a4 = a1;
    std::cout << "a4 (copie de a1) = ";
    a4.afficher();
    std::cout << "a1 et a4 identiques ? ";
    std::cout << (a1.estIdentique(a4) ? "Oui" : "Non") << std::endl;

    return 0;
}
