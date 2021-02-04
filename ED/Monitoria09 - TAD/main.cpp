#include<iostream>
#include "Circulo.h"
using namespace std;


/*
    g++ main.cpp Circulo.cpp Ponto.cpp -o exe

*/

int main(){
    Ponto *p1 = pto_cria(0,0);
    Ponto *p2 = pto_cria(3,7);
    Ponto *p3 = pto_cria(-2,8);

    Circulo *c1 = circ_cria(5,p1);
    Circulo *c2 = circ_cria(10,p2);
    Circulo *c3 = circ_cria(15,p3);

    circ_imprime(c1);
    circ_imprime(c2);
    circ_imprime(c3);


    circ_libera(c1);
    circ_libera(c2);
    circ_libera(c3);
    pto_libera(p1);
    pto_libera(p2);
    pto_libera(p3);





    


    return 0;
}