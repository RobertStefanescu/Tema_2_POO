#ifndef Matrice_Oarecare_h
#define Matrice_Oarecare_h
#include "Matrice.h"

class Matrice_Oarecare: public Matrice{
private:
    int lin;
public:
    Matrice_Oarecare(int numar_linii=0);
    Matrice_Oarecare(Matrice_Oarecare& m2);
    ~Matrice_Oarecare();
    friend std::istream& operator>>(std::istream& input, Matrice_Oarecare& m );
    friend std::ostream& operator<<(std::ostream& output, Matrice_Oarecare& m );
    Vector& operator[](int poz);
    Matrice_Oarecare& operator=(Matrice_Oarecare& m2);
};


#endif /* Matrice_Oarecare_h */
