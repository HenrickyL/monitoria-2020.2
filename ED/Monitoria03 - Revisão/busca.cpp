#include <iostream>
using namespace std;

struct Aluno{
    int matricula;
    char nome[100];
    float media;
};


void printAlunos(Aluno*a,  int n){
    cout <<"\n------------------\n";
    for(int i=0; i<n;i++){
        cout << "nome: " << a[i].nome <<"\n";
        cout << "matricula: " << a[i].matricula <<"\n";
        cout << "media: " << a[i].media <<"\n";


    }
    cout <<"------------------\n";

}




int main(){
    int n;
    cin>>n;
    Aluno alunos[n];
    
    for(int i=0;i<n;i++){
        Aluno x;
        cout << "matricula: ";
        cin>>x.matricula;
        cout << "nome: ";
        cin.ignore();
        cin.get(x.nome,100);
        cout << "media: ";
        cin >>x.media;

        alunos[i] = x; 
        cout<<"cadastrando aluno...\n";
    } 

    printAlunos(alunos, n);  


    //recebe a matricula para procurar
    int m;
    cout<<"Digite a matricula que está procurando: ";
    cin>>m;
    cout<<"buscando a matricula < " << m<<" >...\n";


    //busca
    int pos = -1;


    //busca sequencial
    cout <<"Buscando...\n";
    for(int i=0; i<n ;i++){


        if(alunos[i].matricula == m){
            pos=i;
        }
    }




    if(pos < 0 ) cout <<"não encontrado\n";
    else{
       cout<< alunos[pos].nome<<"\n";
       cout<< alunos[pos].media<<"\n";

    }



    return 0;
}