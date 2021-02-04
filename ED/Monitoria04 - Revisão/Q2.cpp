#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string.h>
using namespace std;

// void strPrint(char* s){
//     for(int i=0; s[i]!='\n'; i++)
//         cout<<s[i];
//     cout<<"\n";
// }


void ordena(char** v, int n){
    //bublesort
    for(int i=0; i<n-1; i++){
        for(int j=0;j<n-1;j++){
            if(   strcmp(v[j],v[j+1]) > 0){
                char* aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}


int main(){
    int n;
    cin>>n;
    char** v = new char*[n];
    int l;//TAMANHOS de cada string individual
    char *aux;// guardar as strings
    for(int i=0;i<n;i++){
        cin>>l;
        aux = new char[l+1];
        cin.ignore();
        cin.get(aux,l+1);
        v[i] = aux;
    }
    cout<<"-------------------\n";
    for(int i=0; i<n ; i++){
        cout<<v[i]<<"\n"; 
    }    

    ordena(v,n);

    cout<<"-------------------\n";
    for(int i=0; i<n ; i++){
            cout<<v[i]<<"\n"; 
        } 

//liberar a memória alocada
    for(int i=0;i<n;i++){
        delete v[i];
    }
    delete[] v;

    return 0;
}