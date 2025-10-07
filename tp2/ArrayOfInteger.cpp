#include "ArrayOfInteger.h"


int ArrayOfInteger::instanceCount = 0;


void ArrayOfInteger::resize(int newCapacity) {
    int* newData = new int[newCapacity];
    for (int i = 0; i < size; ++i) {
        newData[i] = data[i];
    }
    for (int i = size; i < newCapacity; ++i) {
        newData[i] = 0;
    }
    delete[] data;
    data = newData;
    capacity = newCapacity;
}


ArrayOfInteger::ArrayOfInteger() {
    capacity = 10;
    size = 0;
    data = new int[capacity]{0};
    instanceCount++;
}


ArrayOfInteger::ArrayOfInteger(int cap) {
    capacity = cap;
    size = 0;
    data = new int[capacity]{0};
    instanceCount++;
}


ArrayOfInteger::ArrayOfInteger(const ArrayOfInteger& other) {
    capacity = other.capacity;
    size = other.size;
    data = new int[capacity];
    for (int i = 0; i < size; ++i) {
        data[i] = other.data[i];
    }
    instanceCount++;
}

ArrayOfInteger::~ArrayOfInteger() {
    delete[] data;
    instanceCount--;
}


void ArrayOfInteger::afficher() const {
    std::cout << "{ ";
    for (int i = 0; i < size; ++i) {
        std::cout << data[i];
        if (i != size - 1) std::cout << ", ";
    }
    std::cout << " }" << std::endl;
}


bool ArrayOfInteger::appartient(int value) const {
    for (int i = 0; i < size; ++i) {
        if (data[i] == value) return true;
    }
    return false;
}


void ArrayOfInteger::ajouter(int value) {
    if (value < 0) return; 
    if (appartient(value)) return; 
    if (size >= capacity) {
        resize(capacity * 2); 
    }
    data[size++] = value;
}

void ArrayOfInteger::retirer(int value) {
    int index = -1;
    for (int i = 0; i < size; ++i) {
        if (data[i] == value) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        for (int i = index; i < size - 1; ++i) {
            data[i] = data[i + 1];
        }
        data[size - 1] = 0;
        size--;
    }
}


bool ArrayOfInteger::estIdentique(const ArrayOfInteger& other) const {
    if (size != other.size) return false;
    for (int i = 0; i < size; ++i) {
        if (!other.appartient(data[i])) return false;
    }
    return true;
}


int ArrayOfInteger::getInstanceCount() {
    return instanceCount;
}


