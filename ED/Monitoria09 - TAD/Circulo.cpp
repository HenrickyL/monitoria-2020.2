#include "Circulo.h"
#include <math.h>
#include<iostream>
struct Circulo{
    Ponto *centro;
    double raio;
};
// Aloca e retorna um struct Circulo
Circulo *circ_cria(double raio, Ponto *centro){
    Circulo *c  = new Circulo;
    c->centro = centro;
    c->raio = raio;

    return c;
}

// Libera a memoria que foi alocada para o struct Circulo
void circ_libera(Circulo *c){
    delete c;
}

// setters
void circ_setRaio(Circulo *c, double raio){
    c->raio = raio;
}
void circ_setCentro(Circulo *c, Ponto *p){
    c->centro = p;
}
void circ_setX(Circulo *c, double x){
    pto_setX(c->centro,x);
}
void circ_setY(Circulo *c, double y){
    pto_setY(c->centro,y);
} 

// getters
double circ_getRaio(Circulo *c){
    return c->raio;
}
Ponto *circ_getCentro(Circulo *c){
    return c->centro;
}
double circ_getX(Circulo *c){
    return pto_getX(c->centro);
} // coordenada x do centro do Circulo c
double circ_getY(Circulo *c){
    return pto_getY(c->centro);
} // coordenada y do centro do Circulo c

// Retorna a area do Circulo c
double circ_getArea(Circulo *c){

}

// Recebe um Ponto p e um Circulo c e retorna:
// true: se o ponto esta contido no circulo;
// false: caso contrario.
bool circ_interior(Circulo *c, Ponto *p){
}


//imprime o circulo
void circ_imprime(Circulo *c){
    std::cout << "["<<"raio:"<< c->raio<<"," <<"X:"<<pto_getX(c->centro)<<","<< "Y:"<<pto_getY(c->centro)<<"]\n";
}