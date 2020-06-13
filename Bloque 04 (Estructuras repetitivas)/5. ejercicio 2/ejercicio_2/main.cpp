#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
    //Realice un programa que solicite de la entrada estandar numeros hasta que se introduzca un cero. en ese momento el programa debe terminar
    //y mostrar en la salida estandar el numero de valores mayores que cero leidos

    int numero,conteo=0;

    do{
        cout<<"Digite un numero: ";
        cin>>numero;
        if(numero>0){
            conteo++;
        }

    }while(numero!=0);
    cout<<"el numero de valores mayores a cero introducidos es: "<<conteo<<endl;

    getch();
    return 0;
}
