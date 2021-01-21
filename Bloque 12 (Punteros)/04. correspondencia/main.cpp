#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int numeros[]={1,8,3,7,5};
    int *dir_numeros, *dir_numeros2;

    dir_numeros=&numeros[0];
    dir_numeros2=numeros;

    for (int i=0;i<5;i++){
        cout<<"elemento del vector "<<i+1<<": "<<numeros[i]<<" "<<"posicion en memoria "<<": "<<dir_numeros++<<endl;
    }

    cout<<"\n";

    for (int i=0;i<5;i++){
        cout<<"elemento del vector "<<i+1<<": "<<numeros[i]<<" "<<"posicion en memoria "<<": "<<dir_numeros2++<<endl;
    }
    system("pause");
    return 0;
}
