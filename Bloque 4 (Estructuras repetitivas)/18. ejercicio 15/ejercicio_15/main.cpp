#include <iostream>
#include <stdlib.h>
#include <time.h>  //libreria para agregar un numero random

using namespace std;

int main()
{
    //Realice un programa que solicite al usuario que piense en un numero entero entre 1 y 100.
    //el programa debe genegar un numero aleatorio en ese mismo rango, e indicarle al usuario si el numero es mayor o menor
    //al numero aleatorio, asi hasta que lo adivine. y por ultimo mostrarle el numero de intentos que le llevo.

    int numero,dato,contador=0;

    srand(time(NULL));//numero aleatorio
    dato=1+rand()%(100);

    do{
        cout<<"Digite un numero"<<endl;
        cin >>numero;
        if(numero>dato){
            cout<<"\nDigite un numero menor\n";
        }
        if(numero<dato){
            cout<<"\nDigite un numero mayor\n";
        }
        contador++;
    }while(numero!=dato);

    cout<<"\nFELICIDADEZ ADIVINASTE EL NUMERO\n";
    cout<<"Numero de intentos: "<<contador<<endl;



    system("pause");
    return 0;
}
