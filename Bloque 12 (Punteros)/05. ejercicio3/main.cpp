/*Ejercicio 3: rellenar un array de 10 numeros, posteriormente utilizando punteros
indicar cuales son los numeros pares y su posicion en memoria*/

#include <iostream>
#include <stdlib.h>


using namespace std;

int main()
{
    int numeros[10],*dir_nuumeros;

    for(int i=0;i<10;i++){
        cout<<"Digite un numero["<<i<<"]";
        cin>>numeros[i];
    }
    dir_nuumeros=numeros;
    for(int i=0;i<10;i++){
        if(*dir_nuumeros%2==0){
            cout<<"el numero: "<<*dir_nuumeros<<"es par"<<endl;
            cout<<"posicion: "<<dir_nuumeros<<endl;
        }
        dir_nuumeros++;
    }


    system("pause");
    return 0;
}
