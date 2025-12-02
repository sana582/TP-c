#ifndef DYNAMICVECTOR_H
#define DYNAMICVECTOR_H
#include <iostream>
#include <stdexcept>   
template<class T>
class DynamicVector{
private:
    T* data;        
    int size;       

public:
    DynamicVector(int n);
    ~DynamicVector();

    T& operator[](int index);
    int getSize() const;
};

#endif
