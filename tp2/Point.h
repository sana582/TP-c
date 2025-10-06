#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <cmath>

class Point {
private:
    double x, y, z;
    static int instanceCount;

public:
    // Constructeur par défaut
    Point();

    // Constructeur avec paramètres
    Point(double x, double y, double z);

    // Constructeur de recopie
    Point(const Point& p);

    // Destructeur
    ~Point();

    // Setters et Getters
    void setX(double x);
    void setY(double y);
    void setZ(double z);
    double getX() const;
    double getY() const;
    double getZ() const;

    // Méthode de saisie
    void saisir();

    // Méthode d’affichage
    void afficher() const;

    // Translation
    void translater(double dx, double dy, double dz);

    // Distance entre deux points
    double distance(const Point& autre) const;

    // Compteur d’instances
    static int getInstanceCount();
};

#endif
