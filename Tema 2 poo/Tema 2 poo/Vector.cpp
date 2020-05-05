#include "Vector.h"

int Vector::patratic = -1;

Vector::Vector(int dimensiune){
    dim = dimensiune;
    a = new int[dim];
}

Vector::Vector(Vector& v2){
    dim = v2.dim;
    a = new int[dim];
    for(int i = 0; i < dim;i++){
        a[i]=v2.a[i];
    }
}

Vector::~Vector(){
    //  if(dim>0)
    delete[]a;
    dim=0;
}

std::istream& operator >> (std::istream& input, Vector& v){
    //if(v.dim>0)
    delete[]v.a;
    if(Vector::getPatratic() == -1)
        input >> v.dim;
    else
        v.dim=Vector::getPatratic();
    v.a = new int[v.dim];
    for (int i = 0; i < v.dim; i++)
        input >> v.a[i];
    return input;
}

std::ostream& operator << (std::ostream& output, Vector& v){
    for (int i = 0; i < v.dim; i++)
        output <<v.a[i] <<" ";
    output << '\n';
    return output;
}

Vector& Vector::operator=(Vector &v2){
    if (this != &v2){
        //if(dim>0)
        delete[]a;
        dim=v2.dim;
        a= new int [dim];
        for (int i = 0; i < dim; i++)
            a[i]=v2.a[i];
    }
    return *this;
}

int Vector::getDim(){
    return dim;
}

int& Vector::operator[](int poz){
    return a[poz];
}

void Vector::setPatratic(int nr){
    patratic = nr;
}

int Vector::getPatratic(){
    return patratic;
}
