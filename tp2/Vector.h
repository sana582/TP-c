#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <cmath>

class Vector {
private:
    int dimension;
    double* coordinates;
    static int instanceCount;

public:
    // Constructeurs
    Vector();
    Vector(int dim);
    Vector(const Vector& v);

    // Destructeur
    ~Vector();

    // Getters et Setters
    double getCoordinate(int i) const;
    void setCoordinate(int i, double value);

    // Méthodes
    void afficher() const;
    double norme() const;
    bool egal(const Vector& v) const;
    double produitScalaire(const Vector& v) const;
    void multiplierParReel(double k);
    Vector addition(const Vector& v) const;

    // Compteur d’instances
    static int getInstanceCount();
};

#endif
