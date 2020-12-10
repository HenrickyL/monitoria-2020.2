#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

struct Aluno
{
    char nome[40];
    int matricula;
    char disciplina[10];
    float nota;
};
void ler(Aluno *a, int t){
    
    for(int i=0;i<t;i++){
       
        cin>>a[i].matricula;
        cin.ignore();
        //std::getline (std::cin,a[i].nome);
        cin.get(a[i].nome,40);

        
         
        
        cin.ignore();
        cin>>a[i].disciplina;
         
        cin>>a[i].nota;
        
    }
}

int compara(Aluno *a, int t, int c){
    for(int i=0;i<t;i++){
        if(a[i].matricula== c){
           return i;
        }
    }
    
    return t+1;
}

int main(){
    int size =0,  comp = 0;
    cin>>size;
    Aluno alunos[size];
    ler(alunos, size);
    // cin>>comp;

  
    
    // if(compara(alunos, size, comp)< size+1){
    //     cout<<alunos[compara(alunos, size, comp)].nome<<endl;
    //     cout<<fixed<<setprecision(1)<<alunos[compara(alunos, size, comp)].nota<<endl;
    // } else{
    //     cout<<"NAO ENCONTRADA"<<endl;
    // }
    
  
    return 0;
}