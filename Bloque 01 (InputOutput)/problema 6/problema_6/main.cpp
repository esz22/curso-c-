#include <iostream>

using namespace std;

int main()
{
    /* Ejecute un programa del ejercicio anrerior con entradas erroneas y observe los resultados.
        Por ejemplo, introsuzca un dato de tipo caracter cuando de espera un dato de tipo entero.
        */
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
