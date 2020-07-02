/*Realice una funcion que dada una matriz y un numero de fila de la matriz
devuelva el menor de los elementos almacenados en dicha fila
*/
#include <iostream>
#include <conio.h>


using namespace std;

void rellenarMatriz(int matrizz[][20],int,int);
int menorDeFila(int matrizz[][20],int);
int matriz[20][20];
int n;
int m;

int main()
{
    int fila;
    int menor;

    cout<<"Digite el numero de filas: ";
    cin>>n;
    cout<<"\nDigite el numero de columnas: ";
    cin>>m;

    rellenarMatriz(matriz,n,m);

    cout<<"\nDigite la fila a conocer su valor minimo: "<<endl;
    cin>>fila;
    fila-=1;
    menor=menorDeFila(matriz,fila);

    cout<<"\nEl elemento menor es: "<<matriz[fila][menor]<<endl;

    getch();
    return 0;
}
void rellenarMatriz(int matrizz[][20],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"\nDigite el numero de la posicion ["<<i+1<<"],["<<j+1<<"]: ";
            cin>>matrizz[i][j];
        }
    }
}
int menorDeFila(int matrizz[][20],int fila){
    int menor=9999;
    int indice;
    for(int j=0;j<m;j++){
        if(matrizz[fila][j]<menor){
            menor=matrizz[fila][j];
            indice=j;
        }
    }
    return indice;
}
