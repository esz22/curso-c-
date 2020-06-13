#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    /*En una clase de 5 alumnos se han realizado 3 examenes y se requiere determinar el numero de:
    a)alumnos que aprobaron todos los examenes
    b)alumnos que aprobaron almenos un examen
    c)alumnos que aprobaron unicamente el ultimo examen
    Realice un programa que permita la lectura de los datos y el calculo de las estadisticas
    */

    float examen1, examen2, examen3;
    int aprobadosTodos=0;
    int aprobadosUno=0;
    int aprobadosUltimo=0;

    for(int i =1;i<=5;i++){
        cout<<i<<"digite la nota del primer examen";
        cin>>examen1;
        cout<<i<<"digite la nota del segundo examen";
        cin>>examen2;
        cout<<i<<"digite la nota del tercer examen";
        cin>>examen3;
        cout<<"\n";
        if(examen1>10.5 && examen2>10.5 && examen3>10.5){
            aprobadosTodos++;
        }
        if(examen1>10.5 || examen2>10.5 || examen3>10.5){
            aprobadosUno++;
        }
        if(examen3>10.5){
            aprobadosUltimo++;
        }
    }
    cout<<"\nAlumnos que aprobaron todos los examenes: "<<aprobadosTodos<<endl;
    cout<<"\nAlumnos que aprobaron almenos un examen: "<<aprobadosUno<<endl;
    cout<<"\nAlumnos que aprobaron unicamente el ultimo examen: "<<aprobadosUltimo<<endl;

    getch();
    return 0;
}
