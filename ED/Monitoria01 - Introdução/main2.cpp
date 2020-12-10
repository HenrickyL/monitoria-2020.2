#include<iostream>
#include<iomanip>
using namespace std;

int fatorial(int n){
    int res=1;
    for(int i=2; i<=n;i++){
        res= res*i;
        //res *= i;
    }
    return res;
}
double euler(int n){
    float res =1;
    for(int i=1;i<=n;i++){
        res = res + 1.0/fatorial(i);
    }
    return res;
}
int main(){

    float x=0.74684683749;
    double y=1.65;
    
    cout << fixed<< setprecision(6)<< euler(3)<<"\n";


    return 0;
}