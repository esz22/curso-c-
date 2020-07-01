/*desarrolle una funcion que determine si una funcion es simetrica o no
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

void mostrarMatriz(int matriz[][3],int,int);
bool isSimetric(int mat[][3],int,int);

int main()
{
    const int n=3;
    const int m=3;
    int matriz[n][m]{{1,2,3},{2,1,6},{3,6,1}};
    bool simetric;

    mostrarMatriz(matriz,n,m);
    simetric=isSimetric(matriz,n,m);

    if(simetric){
        cout<<"\nLa matriz es simetrica"<<endl;
    }
    else{
        cout<<"\nLa matriz no es simetrica"<<endl;
    }

    system("pause");
    return 0;
}
void mostrarMatriz(int matriz[][3],int n,int m){
    cout<<"Mostrando matriz: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool isSimetric(int mat[][3],int n,int m){
    bool band=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            //if(n==m){
              //  continue;
            //}
            //else{
                if(mat[i][j]!=mat[j][i]){
                    band=false;
                    break;
                }
            //}
        }
    }
    return band;
}
