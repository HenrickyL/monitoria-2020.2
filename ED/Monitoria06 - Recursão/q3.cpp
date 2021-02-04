#include<iostream>

using namespace std;

// fat2(n) = n*fat2(n-2);
int fat2(int n){
    //caso base
    if(n<=1) return 1;
    //verificações
    else if(n%2==0) return -1;
    //chamada da recursão
    else{
        int aux = n*fat2(n-2);
        cout<<n<<" * "; 
        return aux;
    }



}


int main(){

    int n;
    cin>>n;

    cout << "="<<fat2(n)<<"\n";



    return 0;
}