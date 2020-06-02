#include <iostream>

using namespace std;

int main()
{
    /*realice un preograma que que lea la entrada estandar de los siguientes datos de una persona
    edad: entero
    sexo: caracter
    altura: real
    tras leer los datos, el programa debe mostrarlos en la salida estandar*/

    int edad;
    char sexo;
    float altura;

    cout <<"ingrese la su edad "<<endl;
    cin >> edad;
    cout <<"ingrese la su sexo (M/F) "<<endl;
    cin >> sexo;
    cout <<"ingrese la su altura (metros)"<<endl;
    cin >> altura;

    cout<<endl;
    cout <<"Edad: "<<edad<<endl;
    cout <<"Sexo: "<<sexo <<endl;
    cout <<"Altura: "<<altura<<endl;
     return 0;
}
