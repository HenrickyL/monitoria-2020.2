// #include<iostream>
// using namespace std;


// int main(){
//     int l=3,c=3;
//     int m[l][c];
    
//     for(int l=0; l < 3 ;l++){
// 		for(int c=0 ; c < 3 ; c++){
// 			cin >> m[l][c];
// 		}
// 	}
//     int res = 0;
//     for(int i=0; i<l-1; i++){
//         for(int j=0;j<c;j++){
//             // cout<<m[i][j]<<' ';
//             if(m[i][j]>m[i+1][j]) res++;
//         }
//         // cout<<"\n";
//     }
    
//     cout <<res <<"\n";

//     return 0;
// }



#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
	int m[3][3];
	int cont = 0;
	
	for(int l=0; l < 3 ;l++){
		for(int c=0 ; c < 3 ; c++){
			cin >> m[l][c];
		}
	}

	for (int li = 1; li < 3; li++)
	    for(int co = 0 ; co < 3; co++){
		{
			//if(li!=0){
				if (m[li][co] < m[li-1][co])
				{
					cont++;
				}
				
			//}
		}
		
	}
	
	cout << cont<<"\n";
    cout<< m[1][-2]<<"\n";
return 0;
}