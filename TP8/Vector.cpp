#include "Vector.h"
#include <cmath>   

Vector::Vector() : data(nullptr), size(0) 
{}

Vector::Vector(int n) : size(n) {
    data = new double[size];
    for (int i = 0; i < size; i++) data[i] = 0.0;
}

Vector::Vector(double x) : size(1) {
    data = new double[1]{x};
}

Vector::Vector(double x, double y) : size(2) {
    data = new double[2]{x, y};
}

Vector::Vector(double x, double y, double z) : size(3) {
    data = new double[3]{x, y, z};
}

Vector::Vector(double x, double y, double z, double w) : size(4) {
    data = new double[4]{x, y, z, w};
}

Vector::Vector(const Vector& other) : size(other.size) {
    data = new double[size];
    for (int i = 0; i < size; i++) data[i] = other.data[i];
}

Vector::~Vector() {
    delete[] data;
}

Vector& Vector::operator=(const Vector& other) {
    if (this != &other) {
        delete[] data;
        size = other.size;
        data = new double[size];
        for (int i = 0; i < size; i++) data[i] = other.data[i];
    }
    return *this;
}
Vector Vector::operator+(const Vector& other) const {
    if (size != other.size) 
    return *this; 
    Vector result(size);
    for (int i = 0; i < size; i++) 
    result.data[i] = data[i] + other.data[i];
    return result;
}

Vector& Vector::operator+=(const Vector& other) {
    if (size == other.size) {
        for (int i = 0; i < size; i++) 
        data[i] += other.data[i];
    }
    return *this;
}

double Vector::operator*(const Vector& other) const {
    if (size != other.size) return 0.0;
    double res = 0.0;
    for (int i = 0; i < size; i++) res += data[i] * other.data[i];
    return res;
}

Vector Vector::operator*(double scalar) const {
    Vector result(size);
    for (int i = 0; i < size; i++) result.data[i] = data[i] * scalar;
    return result;
}

Vector operator*(double scalar, const Vector& v) {
    return v * scalar;
}

bool Vector::operator==(const Vector& other) const {
    if (size != other.size) return false;
    for (int i = 0; i < size; i++) {
        if (data[i] != other.data[i]) return false;
    }
    return true;
}

bool Vector::operator!=(const Vector& other) const {
    return !(*this == other);
}

void Vector::afficher() const {
    std::cout << "(";
    for (int i = 0; i < size; i++) {
        std::cout << data[i];
        if (i < size - 1) std::cout << ", ";
    }
    std::cout << ")" << std::endl;
}
