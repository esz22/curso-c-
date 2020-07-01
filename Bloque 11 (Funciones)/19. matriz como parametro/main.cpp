/*paso de parametros tipo matriz
elevar al cuadrado todos los elementos de una matriz
*/
#include <iostream>
#include <conio.h>

using namespace std;

void mostrarMatriz(int matriz[][3],int,int);
void calCuadrado(int matriz[][3],int, int);

int main()
{
    const int n=2;
    const int m=3;
    int matriz[n][m]{{1,2,3},{4,5,6}};

    mostrarMatriz(matriz,n,m);
    calCuadrado(matriz,n,m);
    mostrarMatriz(matriz,n,m);

    getch();
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
void calCuadrado(int matriz[][3],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            matriz[i][j]*=matriz[i][j];
        }
    }
}
