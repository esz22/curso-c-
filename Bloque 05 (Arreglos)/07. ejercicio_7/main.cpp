#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Realiza un programa que defina dos vectores de caracteres y despues almacene
    //el contenido de ambos vectores en un nuevo vector, situando en primer lugar
    //los elementos del primer vector seguido por los elemntos del segundo vector.
    //muestre el contenido del nuevo vector en la salida estandar.

    char letras1[]={'a','b','c','d','e'};
    char letras2[]={'f','g','h','i','j'};
    char letras3[10];


    for(int i=0;i<5;i++){
        letras3[i]=letras1[i];
        letras3[i+5]=letras2[i];
    }

    for(int i =0;i<10;i++){
        cout<<letras3[i]<<endl;
    }

    getch();
    return 0;
}
