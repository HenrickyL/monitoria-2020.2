#include<iostream>
#include<cmath>
using namespace std;

bool ePrimo(int n){
    //n = (int)sqrt(n,2); 
    for(int i=2;i<n;i++){
        if(n%i==0){
            //se ele é divisivel então não é primo
            return false;
        }
    }
    return true;
}


int main(){
    int a,b;
    cin>>a;
    cin>>b;
    for(int i=a; i<=b;i++){
        if( ePrimo(i) ){
            cout<<i <<' ';
        }
    }
    cout<<"\n";



    return 0;
}