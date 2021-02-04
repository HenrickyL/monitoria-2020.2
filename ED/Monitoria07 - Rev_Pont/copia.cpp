#include<iostream>
using namespace std;

void strcpy(char *destino, char *origem){
    for(int i=0; origem[i]  ; i++){
        destino[i] = origem[i];
    }
}

int main(){

    char a[20];
    char b[20];

    cin>>a;

    cout<< a << " - " << b<<"\n";
    strcpy(b,a);
    cout<< a << " - " << b<<"\n";


    return 0;
}