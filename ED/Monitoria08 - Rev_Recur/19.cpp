#include<iostream>
using namespace std;
int pertence(int* v, int n, int x){
    //caso base
    if(v[n-1] < x){
        return 0;
    } 
    //chamada da recursão
    else{
        if(v[n-1] == x){
         return 1;
        }
        return pertence(v,n-1,x);
    }
}

int pertence2(int* v,int fim, int x, int ini=0){
   //caso base
   if(fim <= ini){
       return 0;
   }
   //vamos precisar pegar o elemento do meio
   int m =(fim+ini)/2; 
   if(v[m]==x){
       return 1;
   }else{
       if(v[m] < x){
           return pertence2(v,m,x, ini);
       }else{
           return pertence2(v,fim,x, m);
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

    int x;
    cin>>x;

    cout << pertence2(v,n,x)<<"\n";


    return 0;
}