#include<iostream>
#include<string.h>
using namespace std;

int strcmp2(char *str1, char *str2){
    for(int i=0;  str1[i]!='\0' || str2[i]!='\0'   ; i++){
        //se é maior
        if(str1[i] > str2[i]){
            return str1[i] - str2[i];
        }else if(str1[i] < str2[i]){
            return str1[i] - str2[i];
            
        }
        //se é menor

    }
    return 0;

}

void strPrint(char* s){
    for(int i=0;    s[i]     ;i++ ){
        cout << s[i];
    }
    cout<<"\n";

}

int main(){
    char a[20],b[20];
    cin >> a;
    cin >> b;

    //strPrint(a);
    
    cout<< strcmp2(a,b)<<"\n";
    cout<< strcmp(a,b)<<"\n";



    return 0;
}