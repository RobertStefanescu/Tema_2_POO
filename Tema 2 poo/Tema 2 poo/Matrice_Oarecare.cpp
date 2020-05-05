#include "Matrice_Oarecare.h"

Matrice_Oarecare::Matrice_Oarecare(int numar_linii){
    v = new Vector[numar_linii];
    lin=numar_linii;
    Vector::setPatratic(-1);
}

Matrice_Oarecare::Matrice_Oarecare(Matrice_Oarecare& m2){
    Vector::setPatratic (-1);
    lin=m2.lin;
    v = new Vector[lin];
    for (int i = 0; i<lin; i++) {
        v[i] = m2.v[i];
    }
}

Matrice_Oarecare::~Matrice_Oarecare(){
    delete []v;
    lin = 0;
}
std::istream& operator>>(std::istream& input, Matrice_Oarecare& m ){
    Vector::setPatratic(-1);
    delete [] m.v;
    input>>m.lin;
    m.v=new Vector[m.lin];
    for(int i = 0; i < m.lin;i++){
        input>>m.v[i];
    }
    return input;
}
std::ostream& operator<<(std::ostream& output, Matrice_Oarecare& m ){
    for(int i =0; i<m.lin;i++){
        output<<m[i];
    }
    return output;
}

Vector& Matrice_Oarecare:: operator[](int poz){
    return v[poz];
}

Matrice_Oarecare& Matrice_Oarecare::operator=(Matrice_Oarecare& m2){
    Vector::setPatratic(-1);
    if(this!=&m2){
        
        delete [] v;
        lin=m2.lin;
        v = new Vector[lin];
        for(int i = 0; i < lin;i++){
            v[i]=m2.v[i];
        }
        
    }
    return *this;
}
