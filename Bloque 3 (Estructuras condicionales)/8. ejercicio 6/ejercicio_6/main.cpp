#include <iostream>

using namespace std;

int main()
{
    //Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar si el cararacter es una vocal minuscula , es una vocal mayuscula o no es una vocal

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
    case 'A':
        cout <<"es una vocal mayuscula"<<endl;
        break;
    case 'E':
        cout <<"es una vocal mayuscula"<<endl;
        break;
    case 'I':
        cout <<"es una vocal mayuscula"<<endl;
        break;
    case 'O':
        cout <<"es una vocal mayuscula"<<endl;
        break;
    case 'U':
        cout <<"es una vocal mayuscula"<<endl;
        break;
    default:
        cout <<"No es una vocal "<<endl;
        break;
    }


    return 0;
}
