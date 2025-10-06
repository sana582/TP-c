#include "Vector.h"

int Vector::instanceCount = 0;

Vector::Vector() : dimension(0), coordinates(nullptr) {
    instanceCount++;
}

Vector::Vector(int dim) : dimension(dim) {
    coordinates = new double[dim];
    for (int i = 0; i < dim; i++) coordinates[i] = 0.0;
    instanceCount++;
}

Vector::Vector(const Vector& v) : dimension(v.dimension) {
    coordinates = new double[dimension];
    for (int i = 0; i < dimension; i++) {
        coordinates[i] = v.coordinates[i];
    }
    instanceCount++;
}

Vector::~Vector() {
    delete[] coordinates;
    instanceCount--;
}

double Vector::getCoordinate(int i) const {
    if (i >= 0 && i < dimension) return coordinates[i];
    return 0.0;
}

void Vector::setCoordinate(int i, double value) {
    if (i >= 0 && i < dimension) coordinates[i] = value;
}

void Vector::afficher() const {
    std::cout << "(";
    for (int i = 0; i < dimension; i++) {
        std::cout << coordinates[i];
        if (i < dimension - 1) std::cout << ", ";
    }
    std::cout << ")";
}

double Vector::norme() const {
    double sum = 0;
    for (int i = 0; i < dimension; i++) {
        sum += coordinates[i] * coordinates[i];
    }
    return std::sqrt(sum);
}

bool Vector::egal(const Vector& v) const {
    if (dimension != v.dimension) return false;
    for (int i = 0; i < dimension; i++) {
        if (coordinates[i] != v.coordinates[i]) return false;
    }
    return true;
}

double Vector::produitScalaire(const Vector& v) const {
    if (dimension != v.dimension) {
        std::cerr << "Erreur : dimensions incompatibles.\n";
        return 0;
    }
    double prod = 0;
    for (int i = 0; i < dimension; i++) {
        prod += coordinates[i] * v.coordinates[i];
    }
    return prod;
}

void Vector::multiplierParReel(double k) {
    for (int i = 0; i < dimension; i++) {
        coordinates[i] *= k;
    }
}

Vector Vector::addition(const Vector& v) const {
    if (dimension != v.dimension) {
        std::cerr << "Erreur : dimensions incompatibles.\n";
        return Vector();
    }
    Vector res(dimension);
    for (int i = 0; i < dimension; i++) {
        res.coordinates[i] = coordinates[i] + v.coordinates[i];
    }
    return res;
}

int Vector::getInstanceCount() {
    return instanceCount;
}
