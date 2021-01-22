/*Transmision de arreglos
ejemplo: hallar el maximo elemento de un arreglo*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int maxim(int *,int);

int main()
{
    const int nelementos=5;
    int numeros[nelementos]={3,5,20,8,1};

    cout<<"El mayor elemento es: "<<maxim(numeros,nelementos)<<endl;

    system("pause");
    return 0;
}

int maxim(int *pos, int n){
    int maximo=0;

    for (int i=0;i<n;i++){
        if(*(pos+i)>maximo){
            maximo= *(pos+i);
        }
    }
    return maximo;
}
