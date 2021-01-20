/*Ejercicio 1: comprobar si un numero es par o impar, y señalar
la posicion de memoria donde se esta guardando el numero, con punteros*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int numero, *dir_numero;


    cout << "Ingresa in numero \n" << endl;
    cin>>numero;

    dir_numero=&numero;

    if(*dir_numero%2 ==0){
        cout<<"El numero: "<<*dir_numero<<" es par"<<endl;
        cout<<"posicion: "<<dir_numero<<endl;
    }
    else{
        cout<<"El numero: "<<*dir_numero<<" es impar"<<endl;
        cout<<"posicion: "<<dir_numero<<endl;
    }

    system("pause");
    return 0;
}
