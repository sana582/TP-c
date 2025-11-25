#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

class Vector {
private:
    double* data;
    int size;

public:
Vector();
explicit Vector(int n);
Vector(double x);
Vector(double x, double y);
Vector(double x, double y, double z);
Vector(double x, double y, double z, double w);
Vector(const Vector& other);
~Vector();

Vector& operator=(const Vector& other);
Vector operator+(const Vector& other) const;
Vector& operator+=(const Vector& other);
double operator*(const Vector& other) const;
Vector operator*(double scalar) const;
friend Vector operator*(double scalar, const Vector& v);
bool operator==(const Vector& other) const;
bool operator!=(const Vector& other) const;
afficher
};
#endif
