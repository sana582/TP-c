#include "Vector.h"
#include <iostream>
using namespace std;
Vector::Vector() :
Vector::Vector(int n){
   nombreElements=n;
   elements=new int[n];
   for (int i=0; i<n;i++)
   elements[i]=0;
}
Vector::~Vector() {
    delete[] elements;
}

int & Vecteur::operator[](int i)
{
    if (i < 0 || i >= nombreElements)
    {
        VecteurLimite err;   // <<< instance de la classe vide
        throw err;           // <<< on lance l’exception
    }
    return elements[i];
}
