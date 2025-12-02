#include "DynamicVector.h"

template<class T>
DynamicVector<T>::DynamicVector(int n) : size(n) {
    if (n <= 0) {
        throw std::invalid_argument("Size must be positive");
    }
    data = new T[n];  

template<class T>
DynamicVector<T>::~DynamicVector() {
    delete[] data;  
}

// Surcharge de l’opérateur []
template<class T>
T& DynamicVector<T>::operator[](int index) {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of bounds");
    }
    return data[index];
}

// Getter pour la taille
template<class T>
int DynamicVector<T>::getSize() const {
    return size;
}
