#include<iostream>

using namespace std;

void decrescente(int n){
    if(n>=0){
        cout << n << ' ';
        decrescente(n-1);
    }
}


int main(){
    int n;
    cin>>n;

    decrescente(n);
    cout<<"\n";





    return 0;
}