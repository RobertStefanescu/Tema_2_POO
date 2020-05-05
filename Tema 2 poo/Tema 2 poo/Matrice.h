#ifndef Matrice_hpp
#define Matrice_hpp
#include "Vector.h"

class Matrice{
protected:
    Vector *v;
public:
    Matrice();
    Matrice(Matrice& m2);
    virtual ~Matrice() = 0;
    
};

#endif /* Matrice_hpp */
