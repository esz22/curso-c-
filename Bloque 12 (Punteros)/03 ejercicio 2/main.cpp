/*Ejercicio 2: determinar si un numero es primo o no; con punteros y ademas indicar en que posicion de memoria se guardo el numero*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int numero, *dir_num;
    int cont=0;

    cout<<"Ingresa un numero \n" <<endl;
    cin>>numero;

    dir_num=&numero;

    for (int i=1;i<*dir_num;i++){
        if(*dir_num%i==0){
            cont++;
        }
    }
    if (cont>2){
        cout<<"El numero: "<<*dir_num<<" NO es primo"<<endl;
        cout<<"posicion: "<<dir_num<<endl;
    }
    else{
        cout<<"El numero: "<<*dir_num<<" es primo"<<endl;
        cout<<"posicion: "<<dir_num<<endl;
    }

    system("pause");
    return 0;
}
