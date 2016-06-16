#include "mymatrix.h"

myMatrix::myMatrix() {
    
}

myMatrix::myMatrix(int n) {
    size = n;
    mat.reserve(n);
}

myMatrix::~myMatrix() {
    
}

void  myMatrix::getSize() {
    return this->size;
}
