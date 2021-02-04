#include<iostream>
using namespace std;
    //se n=1 ou n=2, então fib(n) = 1
    //se n >= 3, então fib(n) = fib(n-1) + fib(n-2).
int fib(int n){
    
    //caso base:
    if(n==1||n==2) return 1;
    //chamada da recursão:
    else
        return fib(n-1)+fib(n-2);
   
}


int main(){
    int n;
    cin >> n;
    cout << fib(n) << endl;
}