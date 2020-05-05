#include "Matrice_Patratica.h"
#include "Vector.h"
Matrice_Patratica::Matrice_Patratica(int numar_linii){
    v = new Vector[numar_linii];
    dim=numar_linii;
    Vector::setPatratic (dim);
}

Matrice_Patratica::Matrice_Patratica(Matrice_Patratica& m2){
    Vector::setPatratic (dim);
    dim=m2.dim;
    v = new Vector[dim];
    for (int i = 0; i<dim; i++) {
        v[i] = m2.v[i];
    }
}

Matrice_Patratica::~Matrice_Patratica(){
    delete []v;
    dim = 0;
}
std::istream& operator>>(std::istream& input, Matrice_Patratica& m ){
    delete [] m.v;
    input>>m.dim;
    Vector::setPatratic(m.dim);
    m.v=new Vector[m.dim];
    for(int i = 0; i < m.dim;i++){
        input>>m.v[i];
    }
    return input;
}
std::ostream& operator<<(std::ostream& output, Matrice_Patratica& m ){
    for(int i =0; i<m.dim;i++){
        output<<m[i];
    }
    return output;
}

Vector& Matrice_Patratica:: operator[](int poz){
    return v[poz];
}

Matrice_Patratica& Matrice_Patratica::operator=(Matrice_Patratica& m2){
    Vector::setPatratic(dim);
    if(this!=&m2){
        
        delete [] v;
        dim=m2.dim;
        v = new Vector[dim];
        for(int i = 0; i < dim;i++){
            
            v[i]=m2.v[i];
        }
        
    }
    return *this;
}
