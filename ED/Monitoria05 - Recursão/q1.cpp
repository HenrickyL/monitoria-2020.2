#include <iostream>
using namespace std;



int fat(int n){
    //caso base
    if(n<=1) return 1;
    //chamada da recursão
    else{
        
        return n*fat(n-1);
    }
}


int main(){

    int n;
    cin>>n;
    cout<<"fat("<<n<<")= " <<fat(n)<<"\n";


    return 0;
}