#include<iostream>

using namespace std;

void menor(int*v, int n, int* m){
    
    if(n>0){
        if(v[n-1] < *m)
            *m = v[n-1];
        
        menor(v,n-1,m);
            
    }
}




int main(){

    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int m=v[0];
    menor(v,n, &m);
    cout<<m<<"\n";



    return 0;
}