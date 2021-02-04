#include<iostream>
using namespace std;

void mm(int A[], int n, int *min, int *max){
    //definir o valor inicia
    *min = A[0];
    *max = A[0];
    //busco
    for(int i=1;i<n;i++){
        //procuro o maior
        if(A[i]>*max){
            *max = A[i];
        }
        if(A[i]<*min){ //ou o menor
            *min=A[i];
        }

    }

}

int main(){
    int n;
    cin>>n;
    int v[n];

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    //vamos precisar das variavies Maior e menor
    int M,m;
    

    mm(v,n,&m,&M);
    cout << "Maior: " <<M<<"\n";
    cout << "Menor: " <<m<<"\n";


    return 0;
}