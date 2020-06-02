#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Realice un programa que calcule el producto de dos matrices cuadradas de 3x3

    int mat1[3][3];
    int mat2[3][3];
    int mult[3][3];

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
            mult[i][j]=0;
            for(int k =0;k<3;k++){
                mult[i][j]=mult[i][j]+mat1[i][k]*mat2[k][j];
            }
        }
    }

    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mult[i][j]<<" ";
        }
        cout<<endl;
    }



    getch();
    return 0;
}
