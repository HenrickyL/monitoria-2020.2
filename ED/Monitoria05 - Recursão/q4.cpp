#include <iostream>
using namespace std;
void printVet(int *v, int n, int ini=0){
    //caso base:
    if( ini<n-1){
        cout <<v[ini]<<", ";
        printVet(v,n,ini+1);
    }
    else{
        cout <<v[n-1];
    }
    //chamada da recursão:
}



//função recursiva que retorna um vetor que é a soma dos elementos 2 a 2 de um vetor
void triangulo(int* v, int n){
    //caso base:
    if(n>0){
        //calcular as somas
        int aux[n-1];
        for(int i=0;i<n;i++){
            aux[i] = v[i]+v[i+1];
        
        }

        //chamada da recursão
        triangulo(aux,n-1);

        //printar
        cout<<"[";
        printVet(v,n);
        cout<<"]\n";
        
        
    }
    //chamada da recursão

}




int main(){
    int n;
    cout<<"n:";
    cin>>n;
    int v[n];
    cout<<"vetor: ";
    for(int i=0; i<n;i++){
        cin>>v[i];
    }

    triangulo(v,n);


    return 0;
}
