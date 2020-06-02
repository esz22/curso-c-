#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Desarrollar un programa que determine si una matriz es simetrica o no
    //una matriz es simetrica si es cuadrada y si es igual a su transpuesta


    int m;
    int n;
    bool simetria=0;

    cout<<"digite el numero de filas: ";
    cin>>m;
    cout<<"\nDigite el numero de columnas: ";
    cin>>n;

    int mat1[m][n];
    int transp[n][m];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"digite el valor de la posicion "<<i<<" "<<j<<": ";
            cin>>mat1[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            transp[j][i]=mat1[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<transp[i][j]<<" ";
        }
        cout<<endl;
    }

    if(m==n){
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(mat1[i][j]!=transp[i][j]){
                    simetria=1;
                }
            }
        }
        if(simetria==0){
            cout<<"La matriz es simetrica"<<endl;
        }
        else{
            cout<<"La matriz no es simetrica"<<endl;
        }
    }
    else{
        cout<<"La matriz no es simetrica"<<endl;
    }

    getch();
    return 0;
}
