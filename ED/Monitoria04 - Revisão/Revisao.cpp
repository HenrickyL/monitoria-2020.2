#include<iostream>
using namespace std;
struct aluno{
    int matricula;
    float media;
};

int* criaVetor( int n){
    int* v = new int[n];
    for(int i=0;i<n;i++)
        v[i]=0;
    return v;
}
void printV(int* v, int n){
    for(int i=0;i<n;i++)
        cout<<v[i] <<" ";
    cout<<"\n";
}

void recebe(int*v, int n){
    for(int i=0;i<n;i++)
        cin>>v[i];
}


int main(){
    int* v = criaVetor(5);
    printV(v,5);
    recebe(v,5);
    printV(v,5);


    delete v;

    
    






    // int n=10;
    // int v[10] = {1,2,3,4,5,6,7,8,9,10};
    // printaV(v,n);
    // duplica(v,n);
    // printaV(v,n);

    // int x=10;
    // cout<<"x: "<<x<<"\n";
    // altera(&x);
    // cout<<"x': "<<x<<"\n";
    


    // int x=0;
    // int* y=&x;

    // cout<<"x: "<<x<<"\n";
    // *y = 10;
    // cout<<"x': "<<x<<"\n";
    // cout<<"EndereçoX: "<<&x<<"\n";
    // cout<<"EndereçoY: "<<y<<"\n";

    // delete A;
    return 0;
}