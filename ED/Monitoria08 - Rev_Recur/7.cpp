#include<iostream>
using namespace std;

void pares(int n){

    if(n>0){
        if(n%2==0){
            cout << n<<", ";
        }
        pares(n-1);
    }
}

int main(){
    int n;
    cin>>n;

    pares(n);
    cout<<"\n";
  

    



    return 0;
}