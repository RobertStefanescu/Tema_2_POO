#ifndef Vector_h
#define Vector_h
#include <iostream>

class Vector{
private:
    int dim;
    static int patratic;
    int *a;
public:
    Vector(int dimensiune=0 );
    int getDim();
    Vector(Vector& v2);
    ~Vector();
    friend std::istream& operator >> (std::istream& input, Vector& v);
    friend std::ostream& operator << (std::ostream& output, Vector& v);
    Vector& operator = (Vector& v2);
    int& operator[](int poz);
    friend class Matrice_Oarecare;
    friend class Matrice_Patratica;
    void static setPatratic(int nr);
    int static getPatratic();
};

#endif /* Vector_h */
