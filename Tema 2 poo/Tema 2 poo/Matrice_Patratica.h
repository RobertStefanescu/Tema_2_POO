#ifndef Matrice_Patratica_h
#define Matrice_Patratica_h
#include <iostream>
#include "Matrice.h"

class Matrice_Patratica: public Matrice{
private:
    int dim;
public:
    Matrice_Patratica(int numar_linii=0);
    Matrice_Patratica(Matrice_Patratica& m2);
    ~Matrice_Patratica();
    friend std::istream& operator>>(std::istream& input, Matrice_Patratica& m );
    friend std::ostream& operator<<(std::ostream& output, Matrice_Patratica& m );
    Vector& operator[](int poz);
    Matrice_Patratica& operator=(Matrice_Patratica& m2);
};

#endif /* Matrice_Patratica_h */
