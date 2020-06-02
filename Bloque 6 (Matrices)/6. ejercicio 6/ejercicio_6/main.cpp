#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    //Hacer un programa que calcule la suma de dos matrices cuadradas de 3x3

    int mat1[3][3];
    int mat2[3][3];
    int suma[3][3];

    cout<<"Matriz 1"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"digite el valor de la posicion "<<i<<" "<<j<<": ";
            cin>>mat1[i][j];
        }
    }

    cout<<"\nMatriz 2"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"digite el valor de la posicion "<<i<<" "<<j<<": ";
            cin>>mat2[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            suma[i][j]=mat1[i][j]+mat2[i][j];
        }
    }

    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<suma[i][j]<<" ";
        }
        cout<<endl;
    }


    system("pause");
    return 0;
}
