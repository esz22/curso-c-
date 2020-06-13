#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    //Hacer una matriz preguntando al usuario el numero de filas y columnas, llenarla de numeros aleatorios, copiar el contenido a otra matriz y por ultimo motstrarla en pantalla

    int m;
    int n;


    cout<<"Digite el nimero de filas: ";
    cin>>m;
    cout<<"\nDigite el nimero de columnas: ";
    cin>>n;

    int mat1[m][n];
    int mat2[m][n];
    srand(time(NULL));

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            mat1[i][j]=1+rand()%(100);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            mat2[i][j]=mat1[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }

    getch();
    return 0;
}
