#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    //Hacer una mariz de tipo entera de 2x2, llenarla de numeros y luego copiar todo su contenido hacia otra matriz
    int m[2][2];
    int n[2][2];


    for(int i =0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"\nDigite el valor de la pocision "<<i<<","<<j<<": ";
            cin>>m[i][j];
        }
    }
    for(int i =0;i<2;i++){
        for(int j=0;j<2;j++){
            n[i][j]=m[i][j];
        }
    }


    for(int i =0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<n[i][j]<<" ";
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}
