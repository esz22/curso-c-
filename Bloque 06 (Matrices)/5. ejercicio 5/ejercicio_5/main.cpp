#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    //Realice un programa que lea una matriz de 3x3 y cree su matriz transpuesta.

    int mat1[3][3];
    int transp[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"digite el valor de la posicion "<<i<<" "<<j<<": ";
            cin>>mat1[i][j];
        }
    }

    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            transp[j][i]=mat1[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<transp[i][j]<<" ";
        }
        cout<<endl;
    }



    system("pause");
    return 0;
}
