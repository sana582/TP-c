#include "Vector.h"

int Vector::counter = 0;

Vector::Vector() : size(0), data(nullptr) {
    counter++;
}

Vector::Vector(int n):size(n){
data = new double[n];
    for (int i = 0; i < n; i++) data[i] = 0;
}
// creation des vecteurs de taille 1,2,3,4
Vector::Vector(double x) : size(1)
{ data = new double[1]{x}; }

Vector::Vector(double x): size(2)
{data=new double [2]{x}}

Vector::Vector(double x):size(3)
{data =new double [3]{x}}

Vector:: Vector(double x):size(4)
{data= new double [4]{x}}

Vector& Vector::operator=(const Vector& other) {
    if (this != &other) {
        delete[] data;
        size = other.size;
        data = new double[size];
        for (int i = 0; i < size; ++i) {
            data[i] = other.data[i];
        }
    }
    return *this;
}

Vector Vector::operator+(const Vector& other) const {
    if (size != other.size) 
    throw std::invalid_argument("Tailles incompatibles pour l'addition");
    Vector result(size);
    for (int i = 0; i < size; ++i) {
        result.data[i] = data[i] + other.data[i];
    }
    return result;
}

Vector Vector::operator+=(const )