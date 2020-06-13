#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int numeros[]={1,2,3,4,5};
    int inf;
    int sup;
    int mitad;
    int dato;
    bool ban=false;

    dato=4;

    inf=0;
    sup=5;

    while(inf<=sup){
        mitad=(inf+sup)/2;
        if(numeros[mitad]==dato){
            ban=true;
            break;
        }
        if (numeros[mitad]>dato){
            sup=mitad;
            mitad=(inf+sup)/2;
        }
        if(numeros[mitad]<dato){
            inf=mitad;
            mitad=(inf+sup)/2;
        }
    }

    if(ban){
        cout<<"El numero a sido encontrado en la posicion: "<<mitad<<endl;
    }
    else{
        cout<<"El numero no existe en el arreglo"<<endl;
    }

    getch();
    return 0;
}
