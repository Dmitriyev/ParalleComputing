#ifndef MYMATRIX_H
#define MY

#include <vector>
#include <memory>

//namespace{
//    typedef std::vector< std::vector< T > > myMatrix;
//}

template< typename T >
class myMatrix
{
typedef std::vector< std::vector< T > >         myMatrixType;
typedef std::shared_ptr< myMatrixType >         myMatrixSmartPointer;

private:

    myMatrixSmartPointer mat(new myMatrixType());

    int size = 0;

public:

    myMatrix();

    myMatrix(int n);

    ~myMatrix();

    void getSize() const;

};

#endif // MYMATRIX_H
