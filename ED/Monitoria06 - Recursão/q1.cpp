#include<iostream>

using namespace std;

void inverte(int*v, int n, int i=0){
    //caso base
    if(i<n){
        int aux = v[n-1];
        v[n-1] = v[i];
        v[i]=aux;
        inverte(v,n-1,i+1);

    }
    //chamada da recursão

}
void printVet(int *v, int n){
    for(int i=0;i<n-1;i++)
        cout<<v[i]<<", ";
    cout<<v[n-1];
    cout<<"\n";
}






//[1,2,3,4]
//[4,3,2,1]
int main(){
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++)
        cin>>v[i];

    printVet(v,n);

    inverte(v,n);

    printVet(v,n);




    return 0;
}