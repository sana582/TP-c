#define ARRAYOFINTEGER_H
#define ARRAYOFINTEGER_H

#include <iostream>

class ArrayOfInteger {
private:
    int* data;           
    int size;            
    int capacity;        
    static int instanceCount; 

    void resize(int newCapacity); 
public:
   
    ArrayOfInteger();

    ArrayOfInteger(int capacity);

    ArrayOfInteger(const ArrayOfInteger& other);

    ~ArrayOfInteger();

    void afficher() const;
    bool appartient(int value) const;
    void ajouter(int value);
    void retirer(int value);
    bool estIdentique(const ArrayOfInteger& other) const;

    static int getInstanceCount();
};

