/*Hacer una estructura llamada alumno, en la cual se tendran los siguientes campos:
Nombre, Edad, Promedio, pedir datos al usuario para 3 alumnos, comprobar cual  de los 3 tiene
mejor promedio y posteriormente imprimir los datos del alumno
*/

#include <iostream>
#include <stdlib.h>
#include <cstdio>

using namespace std;

struct alumno{
    string nombre;
    int edad;
    float promedio;
};

int main()
{
    struct alumno c1[3];
    float mejor=-999;
    int aux;

    for(int i =0;i<3;i++){
        cout<<"\nNombre del alumno "<<i+1<<": "<<endl;
        getline(cin,c1[i].nombre);
        cout<<"Edad del alumno "<<i+1<<": "<<endl;
        cin>>c1[i].edad;
        cout<<"Promedio del alumno "<<i+1<<": "<<endl;
        cin>>c1[i].promedio;
        if(c1[i].promedio>mejor){
            mejor=c1[i].promedio;
            aux=i;
        }
        fflush(stdin);
    }
    cout<<"\nDatos del alumno con mejor promedio:"<<endl;
    cout<<"Nombre: "<<c1[aux].nombre<<endl;
    cout<<"Edad: "<<c1[aux].edad<<endl;
    cout<<"Promedio: "<<c1[aux].promedio<<endl;

    system("pause");
    return 0;
}
