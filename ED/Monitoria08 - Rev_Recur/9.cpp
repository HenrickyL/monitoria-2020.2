#include<iostream>
using namespace std;

void menor(int* v, int n,int* me){
    //caso base

    //chamada da recurssão
    if(n>0){
        //verificar o menor
        if(v[n-1] < *me){
            *me = v[n-1];
        }
        //olhos os outros
        menor(v,n-1, me);
    }
}

int menor2(int* v, int n,int me=-999){
    //caso base
    if(n==0){
        return me;
    }else{
        //verificar padrão
        if(me==-999){
            //defino o me inicial
            me = v[n-1];
        }else if(v[n-1] < me){
            me = v[n-1];
        }
        //olhos os outros
        return menor2(v,n-1,me);
        
    }



}

int main(){
    int n;
    cin>>n;
    int v[n];

    for(int i=0;i<n;i++){
        cin>>v[i];
    } 

    int m;//=v[n-1];
    //menor(v,n,&m);
    m = menor2(v,n);
    cout<< "O menor e: "<<m<<"\n";


    return 0;
}