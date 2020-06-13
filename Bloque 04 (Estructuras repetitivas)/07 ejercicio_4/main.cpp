#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Escriba un programa que tome cada 4 horas la temperatura exterior,
    //leyendola durante un periodo de 24 horas. Es decir
    //debe leer 6 temperaturas. Calcule la temperatura media del dia, la temperatura mas alta y la mas baja.

    float temperatura,promedio=0, mayor=0,menor=999999,sumaTotal=0;

    for(int i=0;i<24;i+=4){
        cout<<"Digita la temperatura de la hora: "<<i;
        cin>>temperatura;
        sumaTotal+=temperatura;

        if(temperatura>mayor){
            mayor=temperatura;
        }
        if(temperatura<menor){
            menor=temperatura;
        }
    }
    promedio=sumaTotal/6;


    cout<<"\nTemperatura promedio: "<<promedio<<endl;
    cout<<"Temperatura mas alta: "<<mayor<<endl;
    cout<<"Temperatura mas baja: "<<menor<<endl;

    getch();
    return 0;
}
