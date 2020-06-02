#include <iostream>
#include <conio.h>
//#include <string.h>

using namespace std;

int main()
{
    //Hacer un programa que pida al usuario que digite una cadena de caracteres, luego verificar
    //la longitud de la cadena, y si esta supera a 10 caracteres, mostrarla en pantalla, caso contrario no mostrarla

    string kike;
    int tam;


    cout<<"ingrese su nombre: ";
    getline(cin,kike);
    tam = kike.length() ;


    if(tam>10){
        cout<<kike<<endl;
    }



    getch();
    return 0;
}
