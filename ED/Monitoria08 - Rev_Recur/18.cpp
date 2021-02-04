#include<iostream>
using namespace std;

int countDig(char* s, char c){
//caso base
    if(s[0]=='\0'){
        return 0;
    }
    //chamada da recursao
    else{
        //se o atual é um C
        if(s[0]==c){
            return 1 + countDig(s+1,c);
        }
        else{
            return 0 + countDig(s+1,c);
        }
    }
}

int main(){
    //cin.ignore();
    char s[100];
    cin.get(s,100);
    cin.ignore();
    char c;
    cin>>c;

    cout << countDig(s,c)<<"\n";

    return 0;
}