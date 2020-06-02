#include <iostream>

using namespace std;

int main()
{
    /* La calificacion final de un estudiante es el promedio de 3 notas:
    -la nota de practicas que cuenta un 30% del total.
    -la nota teorica que cuenta un 60%
    -la nota de participacion que cuenta el 10% restante
    Escriba un programa que lea las 3 notas del alumno y escriba su nota final.
    */


    float practicas, nota,participacion;
    float calificacion=0;


    cout <<"Digite la nota de practicas"<<endl;
    cin >>practicas;
    cout <<"Digite la nota teorica"<<endl;
    cin >>nota;
    cout <<"Digite la nota de participacion"<<endl;
    cin >>participacion;

    practicas*=.3;
    nota*=.6;
    participacion*=.1;

    calificacion=practicas+nota+participacion;


    cout<<"\nLa nota final del alunmo es: "<<calificacion<<endl;

    return 0;
}
