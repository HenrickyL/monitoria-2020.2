#include <iostream>
using namespace std;

void lerVet(int*v,int n){
    for(int i=0; i<n ; i++){
        cin >> v[i];
    }
}
void lerVetChar(char*v,int n){
    for(int i=0; i<n ; i++){
        cin >> v[i];
    }
}


int main(){
    int n;
    cin >> n;
    float vR[n], Cj1[n];
    char Cj2[n];
    int scoreJ1=0,scoreJ2=0;
    cout << "Lendo VR...\n";
    for(int i=0; i<n ; i++){
        cin>>vR[i];
    }
    cout << "Lendo Cj1...\n";

    for(int i=0; i<n ; i++){
        cin>>Cj1[i];
    }
    cout << "Lendo Cj2...\n";

    for(int i=0; i<n ; i++){
        cin>>Cj2[i];
    }
    cout << "Analisando...\n";

    
    float aux;
    for(int i=0;i<n; i++){
        aux =  Cj1[i] - vR[i];
        if(aux==0){
            scoreJ1++;
        }else if(aux> 0  && Cj2[i]=='M'){// jogador 2 errou
            scoreJ1++;
        }else if(aux> 0  && Cj2[i]=='m'){
            scoreJ2++;
        }else if(aux< 0  && Cj2[i]=='M'){
            scoreJ2++;
        }else if(aux< 0  && Cj2[i]=='m'){
            scoreJ1++;
        }
    }

    if(scoreJ1 > scoreJ2) cout<<"jg1";
    else if(scoreJ1 < scoreJ2) cout<<"jg2";
    else cout<<"empate";




    return 0;
}