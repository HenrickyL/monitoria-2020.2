// Implementacao do TAD Matriz
#include "Matriz.h"
#include<iostream>
#include<iomanip>


Matriz::Matriz(int l, int c){
    this->_l=l;
    this->_c=c;
    //alocando o vetor de vetores
    _M  = new float*[_l];
    //criando os vetores da meu _M
    for(int i=0; i< _l; i++){
        float *v = new float[_c];
        _M[i] = v;
    }  
}

Matriz::~Matriz(){
    for(int i=0; i< _l; i++){
        delete[] _M[i];
    }
    delete[] _M;
    std::cout<<"<Matriz Deletada>\n";
    
} 

int Matriz::linhas(){
    return _l;
}

int Matriz::colunas(){
    return _c;
}  

void Matriz::imprime(int largura){
    for(int i=0;i<_l;i++){
        for(int j=0;j<_c;j++){
            std::cout<<"\t"<<_M[i][j];
        }
        std::cout<<"\n";
    }
}

float Matriz::valor(int i, int j){
    return _M[i][j];
} 

void Matriz::atribui(float v, int i, int j){
    _M[i][j] = v;
} 

Matriz *Matriz::soma(Matriz *B){
    //A+B = C
    Matriz* C = new Matriz(_l,_c);
    for(int i=0;i<_l;i++){
        for(int j=0;j<_c;j++){
            float soma = this->_M[i][j] + B->_M[i][j];
            C->atribui( soma, i,j );
        }
    }
    return C;
    
} 

Matriz *Matriz::multiplica(Matriz *B){
   /* for(int i=0;i<_l;i++){
        for(int j=0;j<_c;j++){
            float soma=0;
            for(int r =0;r<_l;r++){
                soma=A[i][r]*B[r][j];
            }
            C[i][j] = soma;
        }
    }*/
}