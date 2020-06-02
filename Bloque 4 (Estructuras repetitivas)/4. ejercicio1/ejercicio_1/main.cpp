#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Realice un programa que solicite de la entrada estandar un entero del 1 al 10
    //y muestre en la salida estandar su tabla de multiplicar

    int numero;


    do{
        cout<<"digite un numero"<<endl;
        cin >>numero;
        for(int i=1;i<=20;i++){
            cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
        }
    }while(numero>1 && numero<10);


    cout<<"\n\n";
    system("pause");
    return 0;
}
