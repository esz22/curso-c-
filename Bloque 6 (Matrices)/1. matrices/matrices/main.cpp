#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Hacer un programa para rellenar una matriz pidiendo al usuario el numero de filas y columnas
    //posteriormente mostrar la matriz en pantalla

    int n;
    int m;

    cout<<"digite el numero de filas"<<endl;
    cin>>n;
    cout<<"digite el numero de columnas"<<endl;
    cin>>m;

    int matriz[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Digite el valor de la posicion: "<<i<<","<<j<<": ";
            cin>>matriz[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matriz[i][j]<<"  ";
        }
        cout<<endl;
    }

    getch();
    return 0;
}
