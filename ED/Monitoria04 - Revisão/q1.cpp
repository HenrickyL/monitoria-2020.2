#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
struct aluno{
    int matricula;
    char nome[50];
    float media=0;

};




//criar o aluno
aluno le_aluno()
{
    aluno a;
    cin >> a.matricula;
    cin.ignore(); // lê e descarta o caractere '\n' do buffer 
    cin.get(a.nome, 50);
    cin >> a.media;
    return a;
}

aluno* insere_aluno(aluno *v, int *n, aluno a){
    *n= *n+1;
    cout<<*n <<"<n\n";
    if(v==0){
//se naõ foi criado
        v = new aluno[1];
        cout<<"*";

    }else{
    //Realoque 
        //criar um novo maior
        aluno* novo = new aluno[*n];
        //copia os elementos
        for(int i=0; i<*n-1; i++){
            novo[i]=v[i]; 
        }
        //apaga o vetor antigo
        delete v;
        v = novo;
    }
    //adicionar o aluno
    v[*n-1] = a;
    return v;
}

//remover o aluno pela matricula
aluno* remove_aluno(aluno *v, int *n, int matricula){
    //se tiver algo dentro do meu vetor eu posso remover um aluno
    if(v!=nullptr){ // *n>0
        //buscar
        for(int i=0; i<*n; i++){
            if(v[i].matricula == matricula){
                //remoção, para isso temos que realocar
                //pego o do fim e coloco no lugar
                v[i]= v[*n-1];
                //reduzo o meu vetor
                *n=*n-1;
                //cria um novo
                aluno* novo = new aluno[*n];
                //faço uma copia
                for(int i=0;i<*n;i++){
                    novo[i] = v[i];
                }
                //apaga o antigo
                delete v;
                v = novo;
                return v;

            }
        }
    }
    return v;
}


int main()
{
   int num_oper = 0, i, n = 0;
   cin >> num_oper;
   aluno *v = 0;

   for (i = 0; i < num_oper; i++) {
      cin.ignore(); // lê e descarta o caractere '\n' do buffer 
      char oper;
      cin >> oper;
      if (oper == 'i') {
        aluno a = le_aluno();
        v = insere_aluno(v, &n, a);
        cout<<"Aluno Inserido....\n";
      } else {
         int mat;
         cin >> mat;
         v = remove_aluno(v, &n, mat);
        cout<<"Aluno Removido....\n";
      }
   }

   for (i = 0; i < n; i++) {
      cout << v[i].matricula << "\n" << v[i].nome << "\n" << std::fixed << setprecision(1) << v[i].media << "\n";
   }
   
   delete[] v;
   
   return 0;
}