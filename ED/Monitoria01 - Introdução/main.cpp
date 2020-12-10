#include<iostream>
using namespace std;

void alimentamat(int **m, int l, int c){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            cin>>m[i][j];
        }
    }
}
void printM(int **m, int l,int c){
    for(int i=0;i<l;i++){
        for(int j=0; j<c;j++){
            cout <<m[i][j]<< ' ';
        }
        cout<<"\n";
    }
}
int somaL()
somaC()
somaD()
bool quadMagic(int**m,c,l){
    //ja fiz a soma
    int soma=6;
    ds=DsomaD
    for(int i=0;i <l;i++){
        for(int j=0;j<c;j++){
            int sl = somaL()
            if(sl != soma){
                return false;
            }
        }
        sc = somaC
    }
    return true;
}


int main(){
    int l=3,c=3;
    int **m = new int*[l];
    for(int i=0;i<l;i++){
        // alocar para cada linha
        int *aux = new int[c];
        m[i] = aux;
        for(int j=0; j<c;j++){
            cin>>m[i][j];
        }
    }
    printM(m,l,c);

    
    return 0;
}