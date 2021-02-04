#include <iostream>
#include <cstring>
using namespace std;

// Retorna o números de ocorrências do caractere 'c' na string 's' (com 'n' caracteres).
// Algoritmo deve ser recursivo e sem comandos de repetição.
int conta_char_rec(char s[], int n, char c){
    //caso base
    if(n<1) return 0; 
    //chamada darecursão
    else if(s[n-1]==c){
        return 1+conta_char_rec(s,n-1,c);
    }else{
        return 0+conta_char_rec(s,n-1,c);
    }
}

int main(){
   char s[102], c;
   cout<<"String: ";
   
   cin.get(s, 102);
   cin.ignore();
   cout<<"buscar: ";
   cin >> c;
   
   int n = strlen(s); // pega número de caracteres de s
   
   // Chame a função aqui para imprimir na tela o número de ocorrências
   
   cout<< "Encontrei: "<<conta_char_rec(s,n,c)<<"\n";
   return 0;
}