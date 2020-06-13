#include <iostream>

using namespace std;

int main()
{

    //Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar si el caracter es una vocal minuscula o no

    char letra;
    cout <<"Digite un caracter"<<endl;
    cin >>letra;

    switch(letra){
    case 'a':
        cout <<"es una vocal minuscula"<<endl;
        break;
    case 'e':
        cout <<"es una vocal minuscula"<<endl;
        break;
    case 'i':
        cout <<"es una vocal minuscula"<<endl;
        break;
    case 'o':
        cout <<"es una vocal minuscula"<<endl;
        break;
    case 'u':
        cout <<"es una vocal minuscula"<<endl;
        break;
    default:
        cout <<"No es una vocal minuscula"<<endl;
        break;
    }


    return 0;
}
