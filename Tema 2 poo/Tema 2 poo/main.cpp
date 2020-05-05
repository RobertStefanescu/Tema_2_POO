#include <iostream>
#include "Matrice_Oarecare.h"
#include "Matrice_Patratica.h"

using namespace std;

int main()
{
    
    Matrice_Oarecare m(7);
    std::cin>>m;
    Matrice_Oarecare m2(m);
    Matrice_Oarecare m3;
    m3 = m2;
    Matrice_Patratica p(3);
    std::cin>>p;
    Matrice_Patratica p2(p);
    Matrice_Patratica p3;
    p3 = p2;
    std::cout<<"\n"<<m3<<m2<<m<<"\n"<<p<<p2<<p3;
    return 0;
}
