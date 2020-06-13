#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    //Hacer un, programa que lea 5 numeros en un arreglo. los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo

    int n1[5];
    int n2[5];


    for(int i=0;i<5;i++){
        cout<<i<<". Digite los elementos del arreglo: ";
        cin>>n1[i];
        n2[i]=n1[i]*2;
    }

    cout<<"\Mostrando los elementos del arreglo por 2: \n";
    for(int i=0;i<5;i++){
        cout<<n2[i]<<" ";
    }

    system("pause");
    return 0;
}
